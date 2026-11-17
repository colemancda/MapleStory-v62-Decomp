/* FUN_0080e966 - 0x0080e966 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0080e966(int *param_1)

{
  int iVar1;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_10;
  int iStack_c;
  
  iStack_c = 0;
  piStack_10 = (int *)0x0;
  uStack_14 = 0;
  uStack_18 = 0;
  piStack_1c = param_1;
  FUN_00679d22(&piStack_1c,0x1029);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    iStack_c = param_1[0x29];
    piStack_10 = param_1 + 0x2a;
    uStack_14 = 0x80e9ac;
    FUN_0083adf3();
    iStack_c = 1;
    piStack_10 = (int *)0x80e9b5;
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}


