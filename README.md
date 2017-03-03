## Workshop Cafe Table Light Documentation

### Index
- [Overview and Purpose](https://github.com/CRB404/Workshop_Cafe_Table_Lights#overview-and-purpose)
- [Components](https://github.com/CRB404/Workshop_Cafe_Table_Lights#components)
- [Hardware Breakdown](https://github.com/CRB404/Workshop_Cafe_Table_Lights#hardware-breakdown)
- [Hardware Assembly](https://github.com/CRB404/Workshop_Cafe_Table_Lights#hardware-assembly)
- [Installation](https://github.com/CRB404/Workshop_Cafe_Table_Lights#installation)
- [Particle Usage and Managment](https://github.com/CRB404/Workshop_Cafe_Table_Lights#particle-usage-and-managment)
- [Particle Code](https://github.com/CRB404/Workshop_Cafe_Table_Lights#particle-code)
- [Troubleshooting](https://github.com/CRB404/Workshop_Cafe_Table_Lights#troubleshooting)

### Overview and Purpose
This is a repository of information regarding the assembly and installation of custom lights and their controller purpose built for the Workshop Cafe. You can find reference material and links for ordering all components as well as detailed instructions on how to reproduce light pucks and control boards. Also included is a guide to installation and how to manage the particle account associated with the control boards. The last section of the documentation contains commented code and suggestions on changes that might be useful for future teams as well as general system troubleshooting notes.

If a question surfaces that this document does not answer, please feel free to email me questions at hello@adamlukasik.com.

### Components
The following is a list of all related componets and links where to purchase them. (as of march 2017)

- [Particle Photon Board](https://store.particle.io/#photon)
- [NeoPixel Jewel](https://www.adafruit.com/product/2226)
- [8 Pin Ethernet Connectors](http://www.jameco.com/webapp/wcs/stores/servlet/ProductDisplay?refineValue=8&refineType=1&langId=-1&position=1&productId=2078258&refine=1&catalogId=10001&history=2ng9d8k9%7CsubCategoryName~Interconnects%5Erdtvalue~Interconnects%5Erdttype~c%5Ecategory~30%5EcategoryName~category_root%5EprodPage~15%5Epage~SEARCH%252BNAV%40y84g320r%7Ccategory~3038%5EcategoryName~cat_30%5Eposition~1%5Erefine~1%5EsubCategoryName~Interconnects%2B%252F%2BNetworking%252FTelecom%5EprodPage~15%5Epage~SEARCH%252BNAV&sub_attr_name=Number+of+Contacts&storeId=10001&ddkey=http:StoreCatalogDrillDownView)
- [Cat 5e Ethernet Cables](http://www.jameco.com/shop/StoreCatalogDrillDownView?langId=-1&storeId=10001&catalogId=10001&refine=1&position=1&category=254556&subCategoryName=Wire%20%26amp%3B%20Cable%20%2F%20Network%20Cables%20%2F%20Cat%205e%20Ethernet&categoryName=cat_2545&history=geq9fp7f%7CfreeText~ethernet%2Bnetworking%5Esearch_type~jamecoall%5EprodPage~15%5Epage~SEARCH%252BNAV%403yeaqqf8%7Ccategory~2545%5EcategoryName~cat_25%5Eposition~1%5Erefine~1%5EsubCategoryName~Wire%2B%2526%2BCable%2B%252F%2BNetwork%2BCables%5EprodPage~15%5Epage~SEARCH%252BNAV)
- [Board Headers](http://www.jameco.com/z/G85-20-R-Header-Vertical-Receptacle-1-Row-20Cont-100-2-54mm-Female-Header-Receptacle_308567.html)
- [Board Through Hole Headers](http://www.jameco.com/z/7000-1X20SG-R-Connector-Unshrouded-Header-20-Position-2-54mm-Solder-Straight-Thru-Hole_103369.html)
- [Power Supply](http://www.jameco.com/z/RS-50-5-Mean-Well-AC-to-DC-Power-Supply-Single-Output-5-Volt-10-Amp-50-Watt_323388.html)
- [Screw Terminal](http://www.jameco.com/z/OSTTA024163-On-Shore-Technology-2-Position-Top-Screw-Terminal-Block_152347.html)
- [Varied Color Wire](http://www.jameco.com/z/HUWBUN100FT6-22-AWG-6-Color-Solid-Tinned-Copper-Hook-Up-Wire-Assortment-100-Feet_2159189.html)
- [Enclousure](https://www.polycase.com/xr-57f)
- [Heat Shrink](http://www.jameco.com/webapp/wcs/stores/servlet/ProductDisplay?refineValue=1%26amp%3Bquot%3B&refineType=1&langId=-1&position=1&productId=2113682&refine=1&catalogId=10001&history=ylltrh3k%7CfreeText~heat%2Bshrink%2Btubing%5Esearch_type~jamecoall%5EprodPage~50%5Epage~SEARCH%252BNAV&sub_attr_name=Product+Diameter&storeId=10001&ddkey=http:StoreCatalogDrillDownView)
- [Acrylic Disks](http://www.tapplastics.com/product/plastics/plastic_rods_tubes_shapes/cast_acrylic_discs/137)
- [PCB Manufacturing Service]()
- [PCB File]()

To any further editor of this document, please try to keep these links upto date.

### Hardware Breakdown
The hardware is broken down into two primary pieces. The first are the boards. A single board consists of a particle photon, a 5 volt 10 amp powersupply, a custom PCB (file inlcuded in repo), a screw terminal, a group of headers and 8 female ethernet ports. 

The second are the light pucks. A single puck is made using a Neopixel Jewel which is a circular configuration of 7 RGB Neopixel LEDs along with multi color wire and a female ethernet port. The puck also requires a 1 inch diameter acrylic circle, .25 inch thick, and an ethernet cable at the apropriate length from the puck to the control board. The entire puck minus the ethernet cable must also be encased in heat shrink.

The different pieces are made to be as modular as possible and are made to be easily incoperated into table tops or housings such as the ones used in the first installation at the Workshop Cafe. The modularity is ideal for changing spaces and replacement of parts that might break or ware down.

### Hardware Assembly
Hardware assembly happens in to stages, one stage for the puck, another for the boards. 

**Puck Assembly**
![Image](https://raw.githubusercontent.com/CRB404/Workshop_Cafe_Table_Lights/master/LED_soulder_diagram-01.png?token=AIrXDGFhLe7FAtZf_CbSFwp_yViFdxOxks5Yv4n5wA%3D%3D)

**Board Assembly**
![Image](https://raw.githubusercontent.com/CRB404/Workshop_Cafe_Table_Lights/master/Port_soulder_diagram-01.png?token=AIrXDC_IEZZu9-3cAmqO1etSh4BQPsiuks5Yv4o1wA%3D%3D)

### Installation

### Particle Usage and Managment

### Particle Code

### Troubleshooting






## Editor reference

You can use the [editor on GitHub](https://github.com/CRB404/Workshop_Cafe_Table_Lights/edit/master/README.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/CRB404/Workshop_Cafe_Table_Lights/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
