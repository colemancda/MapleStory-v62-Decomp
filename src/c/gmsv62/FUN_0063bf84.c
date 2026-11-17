/* FUN_0063bf84 - 0x0063bf84 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0063bf84(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1[0x1e] == 0) && (1999 < param_2)) {
    if (param_2 < 0x7d3) {
      FUN_0063e0b9(param_2 - 2000);
    }
    else {
      if (param_2 == 3000) {
        FUN_0063deea();
        return;
      }
      if (param_2 == 0xbb9) {
        FUN_0063df5d();
        return;
      }
      if (param_2 == 0xbba) {
        FUN_0063dfd1();
        return;
      }
      if (param_2 == 0xbbb) {
        FUN_0063e045();
        return;
      }
    }
  }
  if (param_2 == 1) {
    iVar1 = *param_1;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = *param_1;
  }
  (**(code **)(iVar1 + 0x34))(param_2);
  return;
}


