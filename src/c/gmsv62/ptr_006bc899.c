/* ptr_006bc899 - 0x006bc899 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006bc899(int *param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 0x7e3) {
    if ((param_3 < 300) || (0x130 < param_3)) goto LAB_006bc911;
    FUN_006bab6e();
  }
  else if (param_2 == 0x7e4) {
    if ((param_3 < 300) || (0x130 < param_3)) goto LAB_006bc911;
    FUN_004aa48c(*(undefined4 *)(param_1[0x18e] + 0x38));
  }
  else {
    if ((param_2 != 0x7e5) || (param_3 != 800)) goto LAB_006bc911;
    param_1[0x162] = param_4;
    FUN_006bd2ae();
  }
  FUN_008161f1(0);
LAB_006bc911:
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


