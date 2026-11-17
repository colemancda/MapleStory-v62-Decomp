/* FUN_0085f405 - 0x0085f405 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0085f405(int param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  if ((param_2 < _DAT_008e8a80) || (_DAT_008e8a80 < param_2)) {
    if (_DAT_008e8a80 < param_2) {
      param_3 = *(double *)(param_1 + 0x40) - param_3;
    }
    for (param_4 = param_4 - param_3; _DAT_008e8a80 < param_4; param_4 = param_4 - dVar1) {
      if (_DAT_008e8a80 <= param_2) {
        param_1 = *(int *)(param_1 + 0x50);
      }
      else {
        param_1 = *(int *)(param_1 + 0x4c);
      }
      if (param_1 == 0) {
        return 0;
      }
      if (*(double *)(param_1 + 0x30) <= _DAT_008e8a80) {
        return param_1;
      }
      if (_DAT_008e8a80 <= param_2) {
        dVar1 = 0.0;
      }
      else {
        dVar1 = *(double *)(param_1 + 0x40);
      }
      if (_DAT_008e8a80 < param_2) {
        dVar1 = *(double *)(param_1 + 0x40) - dVar1;
      }
    }
  }
  return param_1;
}


