module.exports = {
  purge: [],
  darkMode: 'media', // or 'media' or 'class'
  theme: {
    screens: {
      'sm': '640px',
      'md': '768px',
      'sl': '880px',
      'lg': '1024px',
      'xl': '1280px',
      '2xl': '1536px',
    },
    extend: {
      fontWeight: {
        semibold: 600,
      },
      fontFamily: {
        bangla: ['kalpurush']
      },      
      colors: {
        fbGray: '#242526',
        fbdark: '#18191A',
        fbdiv: '#3A3B3C',
      }
    },
  },
  variants: {
    extend: {
      visibility: ['dark'],
      display: ['dark'],
      stroke: ['dark'],
      fill: ['dark'],
      opacity: ['dark'],
      backgroundOpacity: ['dark'],
    },
    backgroundColor: ['responsive', 'focus', 'hover', 'active', 'dark'],
    backgroundImage: ['dark'],
  },
  plugins: [],
}
