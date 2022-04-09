<script lang="ts">
    import single_image from '$lib/assets/single.png';
    import Data from '$lib/Data.svelte';
    import CodeBox from '$lib/CodeBox.svelte';
    let data = [
        ['Flight', '1-22453'],
        ['Flight Time', '17m, 35s'],
        ['Longitude (E)', '79.0249091'],
        ['Latitude (N)', '21.0518352'],
        ['Altitude', '1242 m'],
        ['Position', 'Roll: -24, <br />Pitch: 6, <br />Yaw: 71'],
        ['Air Speed', '26.2 m/s'],
        ['Mission State', '.inbound'],
        ['Failure Level', '!no-failure'],
        ['Zone', 'KNA143'],
        ['Waypoint', 'B45'],
        ['Waypoint Status', '+nominal'],
        ['RecoverySite', 'B45'],
        ['Timestamp', '2022-04-16<br />13:00:04IST']
    ];
    let display = Data
    // let display = CodeBox
</script>

<section class="text-gray-400 bg-gray-900 body-font overflow-hidden min-h-screen">
    <div class="container px-5 py-4 mx-auto">
        <div class="flex flex-wrap -m-12">
            <div class="p-12 pt-56 md:w-1/2 flex flex-col items-start">
                <img
                    src={single_image}
                    style="image-rendering: -webkit-optimize-contrast;"
                    id="map"
                    alt="Map with marker"
                />
            </div>
            <div class="p-12 md:w-1/2 flex flex-col items-start">
                <span
                    class="inline-block mx-auto mb-6 py-1 px-2 rounded bg-gray-800 text-gray-400 text-opacity-75 text-xs font-medium tracking-widest"
                    >IN PROGRESS</span
                >
                <div class="flex rounded-md shadow-sm w-full" role="group">
                    <button
                        on:click="{() => alert('Controls are unavailable during final approach.')}"
                        type="button"
                        class="flex-grow py-2 px-4 text-sm font-medium text-gray-900 bg-white rounded-l-lg border border-gray-200 hover:bg-gray-100 hover:text-blue-700 focus:z-10 focus:ring-2 focus:ring-blue-700 focus:text-blue-700 dark:bg-gray-700 dark:border-gray-600 dark:text-white dark:hover:text-white dark:hover:bg-gray-600 dark:focus:ring-blue-500 dark:focus:text-white"
                    >
                        Controls
                    </button>
                    <button
                    on:click="{() => display = Data}"
                        type="button"
                        class="flex-grow py-2 px-4 text-sm font-medium text-gray-900 bg-white border-t border-b border-gray-200 hover:bg-gray-100 hover:text-blue-700 focus:z-10 focus:ring-2 focus:ring-blue-700 focus:text-blue-700 dark:bg-gray-700 dark:border-gray-600 dark:text-white dark:hover:text-white dark:hover:bg-gray-600 dark:focus:ring-blue-500 dark:focus:text-white"
                    >
                        Data
                    </button>
                    <button
                    on:click="{() => display = CodeBox}"
                        type="button"
                        class="flex-grow py-2 px-4 text-sm font-medium text-gray-900 bg-white rounded-r-md border border-gray-200 hover:bg-gray-100 hover:text-blue-700 focus:z-10 focus:ring-2 focus:ring-blue-700 focus:text-blue-700 dark:bg-gray-700 dark:border-gray-600 dark:text-white dark:hover:text-white dark:hover:bg-gray-600 dark:focus:ring-blue-500 dark:focus:text-white"
                    >
                        System Log
                    </button>
                </div>
                <svelte:component this={display} />
            </div>
        </div>
    </div>
</section>
