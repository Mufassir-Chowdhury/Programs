module.exports = {
  purge: [],
  darkMode: false, // or 'media' or 'class'
  theme: {
    extend: {
      fontWeight: {
        semibold: 600,
      }
    },
  },
  variants: {
    extend: {},
    backgroundColor: ['responsive', 'focus', 'hover', 'active'],
  },
  plugins: [],
}
