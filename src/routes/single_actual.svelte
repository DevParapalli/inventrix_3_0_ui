<script lang="ts">
    import { Loader } from 'google-maps';
    import type { LoaderOptions } from 'google-maps';
    import { onMount } from 'svelte';
    

    onMount(async () => {
        const options: LoaderOptions = {};
    const loader = new Loader('my-api-key', options);
        const google = await loader.load();
        const map = new google.maps.Map(document.getElementById('map'), {
            center: { lat: -34.397, lng: 150.644 },
            zoom: 8
        });
    });
</script>

<div class="flex">
    <!-- This contains the maps -->
    <div class="lg:w-1/2">
        <div id="map" />
    </div>

    <!-- This contains the other part of the info -->
    <div class="lg:w/1/2" />
</div>
