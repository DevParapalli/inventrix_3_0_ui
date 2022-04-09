<script>
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
</script>

<h2 class="sm:text-3xl mx-auto text-2xl title-font font-medium text-white mt-4 mb-4">
    <span>164</span>
    <span class="text-base">Inbound</span>
</h2>
<div class="flex flex-wrap lg:w-4/5 sm:mx-auto sm:mb-2 -mx-2">
    {#each data as datapoint}
        <div class="p-2 sm:w-1/2 w-full">
            <div class="bg-gray-800 rounded flex p-4 h-full items-center">
                <div class="flex title-font font-medium text-white">
                    <span class="text-xs text-gray-400 mr-10">{datapoint[0]}:</span><span
                        class="text-white font-medium ">{@html datapoint[1]}</span
                    >
                </div>
            </div>
        </div>
    {/each}
</div>
