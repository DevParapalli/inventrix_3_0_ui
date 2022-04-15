<script lang="ts">
    import single_image from '$lib/assets/single.png';
    import Data from '$lib/Data.svelte';
    import CodeBox from '$lib/CodeBox.svelte';
    import { onMount } from 'svelte';
import Controls from '$lib/Controls.svelte';
    let data = [
        ['Flight', '1-22453'],
        ['Flight Time (sec)', '1640'],
        ['Longitude (E)', '79.0249091'],
        ['Latitude (N)', '21.0518352'],
        ['Altitude', '1242 m'],
        ['Position', 'Roll: -24, <br />Pitch: 6, <br />Yaw: 71'],
        ['Air Speed', '26.2 m/s'],
        ['Mission State', '.inbound'],
        ['Failure Level', '!no-failure'],
        ['Zone', 'KNA143'],
        ['Last Waypoint', 'C29'],
        ['Next Waypoint', 'B45'],
        ['Waypoint Status', '+nominal'],
        ['Recovery Site', 'B45'],
        ['**Live Distance (cm)', '00']
    ];

    async function change_values() {
        data[3][1] = String(Number(data[3][1]) + (Math.random() - 0.5) / 10000000);
        data[2][1] = String(Number(data[2][1]) + (Math.random() - 0.5) / 10000000);
        data[1][1] = String(Number(data[1][1]) + 1);

        //  we create a fetch request to the Microcontroller to update the Ultrasonic Distance Sensor
        const res = await fetch('http://192.168.0.119/distance');
        const _data = await res.text();
        // console.log(res)
        data[14][1] = _data;
        data = data;
    }
    let display = Data;
    // let display = Controls
    onMount(() => {
        const interval = setInterval(change_values, 1000);
        return () => clearInterval(interval);
    });

    let view = single_image;
    function in_progress_click() {
        if (view == single_image) {
            view = "http://192.168.0.104:8080/video";
        } else {
            view = single_image;
        }
    }
</script>

<section class="text-gray-400 bg-gray-900 body-font overflow-hidden min-h-screen">
    <div class="container px-5 py-4 mx-auto">
        <div class="flex flex-wrap -m-12">
            <div class="p-12 pt-56 lg:w-1/2 flex flex-col items-start">
                <img
                    src={view}
                    style="image-rendering: -webkit-optimize-contrast;"
                    id="map"
                    alt="Map with marker"
                />
            </div>
            <div class="p-12 lg:w-1/2 flex flex-col items-start">
                <span
                    on:click="{in_progress_click}"
                    class="inline-block mx-auto mb-6 py-1 px-2 rounded bg-gray-800 text-gray-400 text-opacity-75 text-xs font-medium tracking-widest"
                    >IN PROGRESS</span
                >
                <div class="flex rounded-md shadow-sm w-full" role="group">
                    <button
                        on:click={() => (display = Controls)}
                        type="button"
                        class="flex-grow py-2 px-4 text-sm font-medium text-gray-900 bg-white rounded-l-lg border border-gray-200 hover:bg-gray-100 hover:text-blue-700 focus:z-10 focus:ring-2 focus:ring-blue-700 focus:text-blue-700 dark:bg-gray-700 dark:border-gray-600 dark:text-white dark:hover:text-white dark:hover:bg-gray-600 dark:focus:ring-blue-500 dark:focus:text-white"
                    >
                        Controls
                    </button>
                    <button
                        on:click={() => (display = Data)}
                        type="button"
                        class="flex-grow py-2 px-4 text-sm font-medium text-gray-900 bg-white border-t border-b border-gray-200 hover:bg-gray-100 hover:text-blue-700 focus:z-10 focus:ring-2 focus:ring-blue-700 focus:text-blue-700 dark:bg-gray-700 dark:border-gray-600 dark:text-white dark:hover:text-white dark:hover:bg-gray-600 dark:focus:ring-blue-500 dark:focus:text-white"
                    >
                        Data
                    </button>
                    <button
                        on:click={() => (display = CodeBox)}
                        type="button"
                        class="flex-grow py-2 px-4 text-sm font-medium text-gray-900 bg-white rounded-r-md border border-gray-200 hover:bg-gray-100 hover:text-blue-700 focus:z-10 focus:ring-2 focus:ring-blue-700 focus:text-blue-700 dark:bg-gray-700 dark:border-gray-600 dark:text-white dark:hover:text-white dark:hover:bg-gray-600 dark:focus:ring-blue-500 dark:focus:text-white"
                    >
                        System Log
                    </button>
                </div>
                <svelte:component this={display} {data} />
            </div>
        </div>
    </div>
</section>
