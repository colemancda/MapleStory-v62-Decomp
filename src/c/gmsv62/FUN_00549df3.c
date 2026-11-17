/* FUN_00549df3 - 0x00549df3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00549df3(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x2d] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008eba08;
  extraout_ECX[1] = &PTR_FUN_008eb9bc;
  extraout_ECX[2] = &PTR_FUN_008eb9b8;
  extraout_ECX[0x2a] = uVar1;
  FUN_0052fe27(iVar2);
  uVar1 = FUN_0045e2eb();
  extraout_ECX[0x2b] = uVar1;
  extraout_ECX[0x27] = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x10);
  iVar2 = (int)*(short *)(*(int *)(iVar2 + 4) + 0xe);
  extraout_ECX[0x25] = iVar2;
  extraout_ECX[0x28] = iVar2;
  extraout_ECX[0x26] = extraout_ECX[0x27];
  uVar1 = FUN_007d1e08();
  extraout_ECX[0x29] = uVar1;
  FUN_004bc5b8(0,0,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


