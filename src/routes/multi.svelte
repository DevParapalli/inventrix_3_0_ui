<script lang="ts">
    import multi_image from '$lib/assets/multi.png';
    import Data from '$lib/Data.svelte';
    import CodeBox from '$lib/CodeBox.svelte';
    import { goto } from '$app/navigation';
    const flights = [
        {
            id: '',
            status: '',
            last_waypoint: '',
            next_waypoint: ''
        }
    ];
</script>

<section class="text-gray-400 bg-gray-900 body-font overflow-hidden min-h-screen">
    <div class="container px-5 py-4 mx-auto">
        <div class="flex flex-wrap -m-12">
            <div class="p-12 pt-56 md:w-1/2 flex flex-col items-start">
                <img
                    src={multi_image}
                    style="image-rendering: -webkit-optimize-contrast;"
                    id="map"
                    alt="Map with marker"
                />
            </div>
            <div class="p-12 md:w-1/2 flex flex-col items-start">
                <div class="pt-10" />
                <div
                    on:click={() => {
                        goto('/single');
                    }}
                    class="bg-gray-700 hover:bg-gray-400 rounded flex p-4 w-full items-center my-2"
                >
                    <div class="text-2xl text-white font-semibold p-4 pr-8 ">164</div>
                    <div class="text-xl text-white">.inbound</div>
                    <div class="ml-auto p-4 text-white">W34</div>
                    <div class="p-1 mr-2 text-white tear" />
                    <div class="bg-[#00aacc] rounded-full text-[#00aacc] p-2">o</div>
                </div>
                <div
                    on:click={() => {
                        window.alert('This is a demo flight, and does not have telemetery.');
                    }}
                    class="bg-gray-700 hover:bg-gray-400 rounded flex p-4 w-full items-center my-2"
                >
                    <div class="text-2xl text-white font-semibold p-4 pr-8">D01</div>
                    <div class="text-xl text-white">.demo</div>
                    <div class="ml-auto p-4 text-white">_01</div>
                    <div class="p-4 text-white">_02</div>
                    <div class="bg-purple-500 rounded-full text-purple-500 p-2">o</div>
                </div>
            </div>
        </div>
    </div>
</section>

<style lang="postcss">
    .tear {
        border-radius: 80% 0 55% 50% / 55% 0 80% 50%;
        border: 3px solid;
        transform: rotate(-45deg);
        /* margin-top: 20px; */
        @apply h-2 w-2 border-red-600;
    }

</style>
