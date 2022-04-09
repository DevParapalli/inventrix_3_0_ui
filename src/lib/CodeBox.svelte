<div class="codeheader" id="codeheader_html">SYSTEM LOGS</div>
<div id="codebox" class="text-xs">
<pre><code class="overflow-auto" data-language="html">
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:58.445 25776 INFO nova.metadata.wsgi.server [-] 10.11.21.123,10.11.10.1 "GET /openstack/2013-10-17/vendor_data.json HTTP/1.1" status: 200 len: 124 time: 0.0008781
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:58.766 25778 INFO nova.metadata.wsgi.server [req-f1603c09-bec5-418f-9b75-0f3393afea8a - - - - -] 10.11.21.123,10.11.10.1 "GET /openstack/2013-10-17/user_data HTTP/1.1" status: 404 len: 176 time: 0.2285759
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.100 25799 INFO nova.metadata.wsgi.server [req-2d24fed7-3524-414c-9783-e3e042c71543 - - - - -] 10.11.21.123,10.11.10.1 "GET /openstack/2013-10-17/meta_data.json HTTP/1.1" status: 200 len: 967 time: 0.2275620
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.114 25799 INFO nova.metadata.wsgi.server [-] 10.11.21.123,10.11.10.1 "GET /openstack/2013-10-17/meta_data.json HTTP/1.1" status: 200 len: 967 time: 0.0010512
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.130 25799 INFO nova.metadata.wsgi.server [-] 10.11.21.123,10.11.10.1 "GET /latest/meta-data/ HTTP/1.1" status: 200 len: 328 time: 0.0009170
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.145 25799 INFO nova.metadata.wsgi.server [-] 10.11.21.123,10.11.10.1 "GET /latest/meta-data/block-device-mapping/ HTTP/1.1" status: 200 len: 124 time: 0.0008931
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.157 25776 INFO nova.metadata.wsgi.server [-] 10.11.21.123,10.11.10.1 "GET /latest/meta-data/block-device-mapping/ami HTTP/1.1" status: 200 len: 119 time: 0.0009408
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.172 25776 INFO nova.metadata.wsgi.server [-] 10.11.21.123,10.11.10.1 "GET /latest/meta-data/block-device-mapping/root HTTP/1.1" status: 200 len: 124 time: 0.0018420
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.410 25746 INFO nova.osapi_compute.wsgi.server [req-d473bea3-588a-441a-8b2a-a137806f8786 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "DELETE /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers/96abccce-8d1f-4e07-b6d1-4b2ab87e23b4 HTTP/1.1" status: 204 len: 203 time: 0.2604880
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:00:59.446 2931 INFO nova.compute.manager [req-d473bea3-588a-441a-8b2a-a137806f8786 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: 96abccce-8d1f-4e07-b6d1-4b2ab87e23b4] Terminating instance
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.567 25795 INFO nova.metadata.wsgi.server [req-240372b7-bd9c-4cdd-977c-d2dc10bf8526 - - - - -] 10.11.21.123,10.11.10.1 "GET /latest/meta-data/placement/ HTTP/1.1" status: 200 len: 134 time: 0.3841610
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:00:59.678 25746 INFO nova.osapi_compute.wsgi.server [req-0dd87940-76ef-4556-bfb6-3cb42c58fc82 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "GET /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers/detail HTTP/1.1" status: 200 len: 1916 time: 0.2644901
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:00:59.733 2931 INFO nova.compute.manager [req-addc1839-2ed5-4778-b57e-5854eb7b8b09 - - - - -] Running instance usage audit for host cp-1.slowvm1.tcloud-pg0.utah.cloudlab.us from 2017-05-16 05:00:00 to 2017-05-16 06:00:00. 87 instances.
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:00:59.739 2931 INFO nova.virt.libvirt.driver [-] [instance: 96abccce-8d1f-4e07-b6d1-4b2ab87e23b4] Instance destroyed successfully.
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:00.419 2931 INFO nova.virt.libvirt.driver [req-d473bea3-588a-441a-8b2a-a137806f8786 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: 96abccce-8d1f-4e07-b6d1-4b2ab87e23b4] Deleting instance files /var/lib/nova/instances/96abccce-8d1f-4e07-b6d1-4b2ab87e23b4_del
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:00.421 2931 INFO nova.virt.libvirt.driver [req-d473bea3-588a-441a-8b2a-a137806f8786 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: 96abccce-8d1f-4e07-b6d1-4b2ab87e23b4] Deletion of /var/lib/nova/instances/96abccce-8d1f-4e07-b6d1-4b2ab87e23b4_del complete
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:00.563 2931 INFO nova.compute.manager [req-d473bea3-588a-441a-8b2a-a137806f8786 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: 96abccce-8d1f-4e07-b6d1-4b2ab87e23b4] Took 1.11 seconds to destroy the instance on the hypervisor.
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:01:01.033 25746 INFO nova.osapi_compute.wsgi.server [req-a9b72c1a-65a9-44a5-bcb3-db8c2aa6d404 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "GET /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers/detail HTTP/1.1" status: 200 len: 1874 time: 0.3479111
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:01.080 2931 INFO nova.compute.manager [req-d473bea3-588a-441a-8b2a-a137806f8786 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: 96abccce-8d1f-4e07-b6d1-4b2ab87e23b4] Took 0.52 seconds to deallocate network for instance.
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:01.698 2931 WARNING nova.virt.libvirt.imagecache [req-addc1839-2ed5-4778-b57e-5854eb7b8b09 - - - - -] Unknown base file: /var/lib/nova/instances/_base/a489c868f0c37da93b76227c91bb03908ac0e742
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:01.699 2931 INFO nova.virt.libvirt.imagecache [req-addc1839-2ed5-4778-b57e-5854eb7b8b09 - - - - -] Removable base files: /var/lib/nova/instances/_base/a489c868f0c37da93b76227c91bb03908ac0e742
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:01.700 2931 INFO nova.virt.libvirt.imagecache [req-addc1839-2ed5-4778-b57e-5854eb7b8b09 - - - - -] Removing base or swap file: /var/lib/nova/instances/_base/a489c868f0c37da93b76227c91bb03908ac0e742
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:01:02.141 25746 INFO nova.osapi_compute.wsgi.server [req-cd5e40af-8fe5-4bd7-ae38-b5fb546d31ff 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "GET /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers/detail HTTP/1.1" status: 200 len: 211 time: 0.1034541
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:01:03.114 25746 INFO nova.api.openstack.wsgi [req-fff6fe1a-cbb6-4b38-806a-afee069d7c13 f7b8d1f1d4d44643b07fa10ca7d021fb e9746973ac574c6b8a9e8857f56a7608 - - -] HTTP exception thrown: No instances found for any event
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:01:03.116 25746 INFO nova.osapi_compute.wsgi.server [req-fff6fe1a-cbb6-4b38-806a-afee069d7c13 f7b8d1f1d4d44643b07fa10ca7d021fb e9746973ac574c6b8a9e8857f56a7608 - - -] 10.11.10.1 "POST /v2/e9746973ac574c6b8a9e8857f56a7608/os-server-external-events HTTP/1.1" status: 404 len: 296 time: 0.0886950
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:01:12.693 25746 INFO nova.osapi_compute.wsgi.server [req-97fcea79-42f7-4241-9b9e-63fe193c1929 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "POST /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers HTTP/1.1" status: 202 len: 733 time: 0.5442920
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:01:12.885 25746 INFO nova.osapi_compute.wsgi.server [req-4e83daf7-a24c-4ab4-96ff-1da5848255ad 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "GET /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers/detail HTTP/1.1" status: 200 len: 1583 time: 0.1878400
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:12.998 2931 INFO nova.compute.claims [req-97fcea79-42f7-4241-9b9e-63fe193c1929 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: b562ef10-ba2d-48ae-bf4a-18666cba4a51] Attempting claim: memory 2048 MB, disk 20 GB, vcpus 1 CPU
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:12.999 2931 INFO nova.compute.claims [req-97fcea79-42f7-4241-9b9e-63fe193c1929 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: b562ef10-ba2d-48ae-bf4a-18666cba4a51] Total memory: 64172 MB, used: 512.00 MB
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:12.999 2931 INFO nova.compute.claims [req-97fcea79-42f7-4241-9b9e-63fe193c1929 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: b562ef10-ba2d-48ae-bf4a-18666cba4a51] memory limit: 96258.00 MB, free: 95746.00 MB
nova-compute.log.1.2017-05-16_13:55:31 2017-05-16 00:01:13.000 2931 INFO nova.compute.claims [req-97fcea79-42f7-4241-9b9e-63fe193c1929 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] [instance: b562ef10-ba2d-48ae-bf4a-18666cba4a51] Total disk: 15 GB, used: 0.00 GB
nova-api.log.1.2017-05-16_13:53:08 2017-05-16 00:02:36.925 25746 INFO nova.osapi_compute.wsgi.server [req-723faf03-db43-4131-a339-c792974c7721 113d3a99c3da401fbd62cc2caa5b96d2 54fadb412c4e40cdbaed9335e4c35a9e - - -] 10.11.10.1 "GET /v2/54fadb412c4e40cdbaed9335e4c35a9e/servers/detail HTTP/1.1" status: 200 len: 1759 time: 0.2896700
  </code></pre>
</div>


<style lang="postcss">
    @import url(https://fonts.googleapis.com/css?family=Roboto:500);

#codebox {
line-height: 1.3;
  color: #fff;
  background-color: #2c3e50;
  -webkit-border-radius: 0px 0px 6px 6px;
  -moz-border-radius: 0px 0px 6px 6px;
  border-radius: 0px 0px 6px 6px;
  margin-bottom: 10px;
  @apply whitespace-nowrap p-3 text-xs;
}

code {
	font-family: Courier, sans-serif;
  font-size: 1em;
	line-height: 1.3;
}

.codeheader {
  padding: 5px 5px 5px 10px;
  font-family: 'Roboto', sans-serif;
  font-size: 1.1em;
  color: #fff;
  -webkit-border-radius: 6px 6px 0px 0px;
  -moz-border-radius: 6px 6px 0px 0px;
  border-radius: 6px 6px 0px 0px;
	user-select: none;
	-ms-user-select: none; /* IE10+, Edge */
	-moz-user-select: none; /* Mozilla */
	-webkit-user-select: none; /* Safari */
}

#codeheader_html {
  background-color: #3D9970;
}

</style>