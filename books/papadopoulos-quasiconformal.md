# Athanase Papadopoulos — quasiconformal geometry

Papers and expository sources relevant to the `mostow` project's treatment of controlled distortion, quasiconformal maps, Teichmüller theory, and the transition from local metric deformation to coarse geometry.

## Especially useful for visualization

### Athanase Papadopoulos — *Nicolas-Auguste Tissot: A link between cartography and quasiconformal theory* (2016)

- arXiv: https://arxiv.org/abs/1612.00279
- Later published in *Archive for History of Exact Sciences*.

Tissot's indicatrix gives an immediately visual measure of local distortion: an infinitesimal circle in the domain maps to an infinitesimal ellipse. The ratio of the ellipse's major and minor axes records directional distortion. This is directly useful for an interactive quasiconformal toy.

### Athanase Papadopoulos — *A note on Nicolas-Auguste Tissot: At the origin of quasiconformal mappings* (2020)

- arXiv: https://arxiv.org/abs/2001.03434
- Appears in *Handbook of Teichmüller Theory*, Volume VII.

A shorter treatment of Tissot's work and its connection to the origins of quasiconformal mappings.

### Athanase Papadopoulos — *Quasiconformal mappings, from Ptolemy's geography to the work of Teichmüller* (2017)

- arXiv: https://arxiv.org/abs/1702.03756

Long historical and mathematical survey connecting cartographic distortion to the development of quasiconformal mapping theory through Grötzsch, Lavrentieff, Ahlfors, and Teichmüller.

## Teichmüller / extremal quasiconformal maps

### Vincent Alberge, Athanase Papadopoulos, Weixu Su — *A commentary on Teichmüller's paper "Extremale quasikonforme Abbildungen und quadratische Differentiale"* (2015)

- arXiv: https://arxiv.org/abs/1511.01313
- Published in *Handbook of Teichmüller Theory*, Volume V.

Commentary on Teichmüller's 1940 paper on extremal quasiconformal maps of closed oriented Riemann surfaces and quadratic differentials.

### Vincent Alberge, Melkana Brakalova-Trevithick, Athanase Papadopoulos — *A Commentary on Teichmüller's paper "Untersuchungen über konforme und quasikonforme Abbildungen"* (2019)

- arXiv: https://arxiv.org/abs/1912.11290
- Published in *Handbook of Teichmüller Theory*, Volume VII.

Covers Teichmüller's 1938 work on conformal and quasiconformal maps, conformal invariants of doubly connected domains, and control of shapes under quasiconformal maps.

## Quasiconformal Teichmüller spaces and metric comparison

### Daniele Alessandrini, Lixin Liu, Athanase Papadopoulos, Weixu Su — *On various Teichmüller spaces of a surface of infinite topological type* (2010)

- arXiv: https://arxiv.org/abs/1008.2851

Compares quasiconformal, length-spectrum, and Fenchel–Nielsen Teichmüller spaces for infinite-type surfaces.

### Daniele Alessandrini, Lixin Liu, Athanase Papadopoulos, Weixu Su — *On the inclusion of the quasiconformal Teichmüller space into the length-spectrum Teichmüller space*

- Published in *Monatshefte für Mathematik* 179 (2016), 165–189.
- DOI: https://doi.org/10.1007/s00605-015-0813-9

Useful for keeping distinct several different notions of bounded deformation rather than casually calling every controlled distortion a quasi-isometry.

## Design note for `mostow`

Tissot's indicatrix is probably the first visualization to build when quasiconformal deformation enters the app.

At a point, draw an intrinsic infinitesimal circle. Under a differentiable map it becomes, to first order, an ellipse. If the singular values of the differential are

```
sigma_max >= sigma_min > 0,
```

then the local quasiconformal dilatation is

```
K = sigma_max / sigma_min.
```

So the interaction can display a field of little circles/ellipses directly on the moving surface:

- circle: locally conformal, K = 1;
- mildly eccentric ellipse: small quasiconformal distortion;
- strongly eccentric ellipse: large distortion.

This gives a much more informative visual than merely coloring the surface by one scalar distortion value.
