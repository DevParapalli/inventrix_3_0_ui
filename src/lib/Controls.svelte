<script>
import { onMount } from "svelte";


    let status = 'off';
    async function toggle_status() {
        if (status == 'off') {
            await fetch('http://192.168.0.119/on');
            status = 'on';
        } else if (status == 'on') {
            await fetch('http://192.168.0.119/off');
            status = 'off';
        }
    }

    let command_input = '';
    async function process_command() {
        if (command_input.toLowerCase() == 'on') {
            await fetch('http://192.168.0.119/on');
            status = 'on';
        } else if (command_input.toLowerCase() == 'off') {
            await fetch('http://192.168.0.119/off');
            status = 'off';
        } else if (command_input.toLowerCase() == 'distance') {
            const res = await fetch('http://192.168.0.119/distance');
            const _data = await res.text();
            alert(`Ultrasonic Distance Readout: ${_data} cm`);
        } else {
            alert('UNKNOWN COMMAND');
        }
        command_input = '';
    }

    onMount(async () => {
        await fetch('http://192.168.0.119/off');
    })
</script>

<div class="flex flex-wrap lg:w-4/5 sm:mx-auto sm:mb-2 -mx-2">
    <!-- {#each data as datapoint} -->
    <div class="p-2  w-full">
        <div class="bg-gray-800 rounded flex p-4 h-full items-center">
            <div class="flex title-font font-medium text-white">
                <span class="text-xs text-gray-400 mr-10">LED Light</span>
                <span class="text-white font-medium">
                    <button
                        class="px-4 py-1 ml-10 mr-2 rounded {status.toLowerCase() === 'on'
                            ? 'bg-blue-500 text-black'
                            : 'bg-gray-600 text-white'}"
                        on:click={toggle_status}>Toggle</button
                    >
                </span>
            </div>
        </div>
    </div>
    <div class="p-2  w-full">
        <div class="bg-gray-800 rounded flex p-4 h-full items-center">
            <div class="flex title-font font-medium text-white">
                <span class="text-xs text-gray-400 mr-10">COMMAND</span>
                <span class="text-white font-medium ">
                    <input
                        class="bg-black text-green-600"
                        type="text"
                        on:keypress={(e) => {
                            if (e.key == 'Enter') {
                                process_command();
                            }
                        }}
                        bind:value={command_input}
                    />
                    <button
                        on:click={process_command}
                        class="bg-gray-600 ml-10 px-4 py-1 rounded mr-2">SEND</button
                    >
                </span>
            </div>
        </div>
    </div>
    <!-- {/each} -->
</div>
