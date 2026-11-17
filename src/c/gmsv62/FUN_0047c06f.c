/* FUN_0047c06f - 0x0047c06f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c06f(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  iVar3 = 0;
  if (*(int *)(extraout_ECX + 0x90) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(extraout_ECX + 0x90) + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (0 < *(int *)(unaff_EBP + -0x10)) {
    do {
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x991);
      uVar1 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00434e21(unaff_EBP + -0x14,uVar1,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      FUN_0047c7cc(2,*(undefined4 *)(unaff_EBP + -0x14),
                   *(undefined4 *)(*(int *)(extraout_ECX + 0x90) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EBP + -0x10));
  }
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x990);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0047c874(2,uVar1,*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


