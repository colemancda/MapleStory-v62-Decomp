/* FUN_005265f8 - 0x005265f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_005265f8(int param_1,int param_2)

{
  short sVar1;
  
  if ((param_2 < 0) || (0xff < param_2)) {
    return 0;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0xc) != 0) {
LAB_00526620:
      return *(uint *)(param_1 + 0x940);
    }
  }
  else if (param_2 == 2) {
    if (*(int *)(param_1 + 0xc) != 0) goto LAB_00526620;
    param_2 = 2;
  }
  else if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    return (uint)(*(char *)(param_2 + 0x824 + param_1) != '\0');
  }
  sVar1 = (*DAT_0097b58c)(param_2);
  return (uint)(sVar1 < 0);
}


