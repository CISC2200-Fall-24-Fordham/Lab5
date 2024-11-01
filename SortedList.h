#pragma once

#include <ostream>

namespace ds {

  /** SortedList abstract class. */
  template <typename Item> class SortedList {
    public:
      virtual int size() const = 0;
      virtual Item get(int i) const = 0;
      virtual void put(const Item &it) = 0;
      virtual Item remove(int i) = 0;
      virtual Item smallest() const = 0;
      virtual Item greatest() const = 0;
      virtual int find(const Item & it) const=0; 

      friend std::ostream &operator<<(std::ostream &os, const SortedList &l) {
        os << "[";
        for (int i = 0; i < l.size(); i += 1) {
          if (i != 0) {
            os << ",";
          }
          os << l.get(i);
        }
        os << "]";
        return os;
      }
  };

} // namespace ds
