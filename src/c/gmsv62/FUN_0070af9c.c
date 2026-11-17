/* FUN_0070af9c - 0x0070af9c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0070af9c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x5a0) + 8) / 1000;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar4 = iVar2 % 0xe10;
  *(int *)(unaff_EBP + -0x14) = iVar4 % 0x3c;
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xfa4);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(unaff_EBP + -0x10,uVar1,iVar2 / 0xe10,iVar4 / 0x3c,*(undefined4 *)(unaff_EBP + -0x14)
              );
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


