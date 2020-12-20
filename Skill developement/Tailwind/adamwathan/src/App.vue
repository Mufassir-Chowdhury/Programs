<template>
<div id="app" class="antialiased text-gray-900">
  <navbar/>
  <div class="bg-gray-200 min-h-screen p-8 flex items-center justify-center">
    <property-card :property="property" class="text-left"/>
  </div>
</div>
</template>

<script>
import Navbar from './components/navbar.vue'
import PropertyCard from './components/propertyCard.vue'

export default {
  name: 'App',
  components: {
    PropertyCard,
    Navbar
  },
  data: () => ({
    property: {
      imageUrl: 'https://images.unsplash.com/photo-1512917774080-9991f1c4c750',
      imageAlt: 'Rear view of modern home with pool',
      beds: 3,
      baths: 2,
      title: 'Modern home in city center',
      priceInCents: 190000,
      formattedPrice: '$1,9000.00',
      reviewCount: 34,
      rating: 4,
    }
  })
}
</script>

<style
    PropertyCard src="./css/tailwind.css" />
<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
}
</style>
