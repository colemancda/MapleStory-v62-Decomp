/* FUN_006ae80c - 0x006ae80c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006ae80c(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  FUN_00879bb8();
  uStack_c = 0xeb;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_10;
  FUN_00679d22(auStack_10,0x75d);
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = (**(code **)(iVar1 + 0x30))();
  iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
  iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
  FUN_0074d8fb(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


