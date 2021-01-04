<template>
<div class="bg-white rounded-lg overflow-hidden border">
    <img class="h-64 w-full" :src="property.imageUrl" :alt="property.imageAlt">
    <div class="p-6">
        <div class="text-gray-600 uppercase text-xs font-semibold tracking-wide">
            {{ property.beds }} beds &bull; {{ property.baths }} baths
        </div>
        <h4 class="font-semibold text-lg leading-tight truncate">{{ property.title }}</h4>
        <div class="mt-1">
            <span>{{ property.formattedPrice }}</span>
            <span class="text-gray-600 text-sm"> / wk</span>
        </div>
        <div class="mt-2 flex items-center">
            <svg v-for="i in 5" :key="i" :class="i <= property.rating ? 'text-green-500': 'text-gray-400'" class="h-4 w-4 fill-current" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 20 20" fill="currentColor">
                <path d="M9.049 2.927c.3-.921 1.603-.921 1.902 0l1.07 3.292a1 1 0 00.95.69h3.462c.969 0 1.371 1.24.588 1.81l-2.8 2.034a1 1 0 00-.364 1.118l1.07 3.292c.3.921-.755 1.688-1.54 1.118l-2.8-2.034a1 1 0 00-1.175 0l-2.8 2.034c-.784.57-1.838-.197-1.539-1.118l1.07-3.292a1 1 0 00-.364-1.118L2.98 8.72c-.783-.57-.38-1.81.588-1.81h3.461a1 1 0 00.951-.69l1.07-3.292z"/>
            </svg>
            <span class="ml-2 text-gray-600 text-sm"> {{ property.reviewCount }} reviews</span>
        </div>
    </div>
</div>
</template>

<script>
export default {
    props: ['property'],
}
</script>

<style lang="postcss">

</style>