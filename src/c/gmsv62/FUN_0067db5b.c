/* FUN_0067db5b - 0x0067db5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0067db5b(int param_1,double param_2,double param_3)

{
  double dVar1;
  
  *(undefined4 *)(param_1 + 0x16c) = 0;
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  *(undefined4 *)(param_1 + 0x178) = 1;
  if ((_DAT_008e8a80 <= param_2) || (*(double *)(param_1 + 0x180) <= param_2)) {
    if ((param_2 <= _DAT_008e8a80) || (param_2 <= *(double *)(param_1 + 0x180))) goto LAB_0067dbf4;
    dVar1 = param_2 + *(double *)(param_1 + 0x180);
    if (dVar1 <= param_2) {
      param_2 = dVar1;
    }
  }
  else {
    dVar1 = param_2 + *(double *)(param_1 + 0x180);
    if (param_2 <= dVar1) {
      param_2 = dVar1;
    }
  }
  *(double *)(param_1 + 0x180) = param_2;
LAB_0067dbf4:
  if ((_DAT_008e8a80 <= param_3) || (*(double *)(param_1 + 0x188) <= param_3)) {
    if (param_3 <= _DAT_008e8a80) {
      return;
    }
    if (param_3 <= *(double *)(param_1 + 0x188)) {
      return;
    }
    dVar1 = param_3 + *(double *)(param_1 + 0x188);
    if (dVar1 <= param_3) {
      param_3 = dVar1;
    }
  }
  else {
    dVar1 = param_3 + *(double *)(param_1 + 0x188);
    if (param_3 <= dVar1) {
      param_3 = dVar1;
    }
  }
  *(double *)(param_1 + 0x188) = param_3;
  return;
}


