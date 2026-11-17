/* FUN_0073dcf0 - 0x0073dcf0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0073dcf0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc7c) != 0) || (param_2 < 0)) goto LAB_0073dd49;
  if (4 < param_2) {
    if (param_2 == 5) {
      iVar1 = FUN_0073dd5c();
      if (iVar1 == 0) {
        return;
      }
      goto LAB_0073dd49;
    }
    if (param_2 != 6) goto LAB_0073dd49;
  }
  FUN_0073e65e();
  FUN_0045f0f3(&DAT_00978474,0xffffffff);
  FUN_00743a05();
LAB_0073dd49:
  *(undefined4 *)(param_1 + 0xc7c) = 0;
  *(int *)(param_1 + 0xb2c) = param_2;
  return;
}


