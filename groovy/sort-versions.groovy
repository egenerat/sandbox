def versions = ["3.12.23", "3.13.16", "3.14.10", "3.14.13", "3.14.17", "3.14.8", "3.15.11", "3.15.14", "3.15.4", "3.15.7", "archive-3.13.14.tar.gz", "3.13.14", "3.13.3", "3.14.11", "3.14.14", "3.14.18", "3.14.9", "3.15.12", "3.15.15", "3.15.5", "3.15.8", "3.13.15", "3.13.4", "3.14.12", "3.14.15", "3.14.4", "3.15.10", "3.15.13", "3.15.16", "3.15.6", "3.15.9"]

Map map = [:].withDefault{key -> return []}
versions.each {
  def major = it.split("\\.")[0..1].join(".")
  map.get(major).add(it)
}
println(map)

map.each{
  k, v ->
    if (v.size() > 2) {
      v.sort()
      println "${k}: ${v}"
    }
}

// TODO:
// - Order the versions
// - Filter the non-valid versions