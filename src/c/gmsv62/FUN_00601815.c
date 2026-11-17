/* FUN_00601815 - 0x00601815 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00601815(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = *(int *)(extraout_ECX + 8);
  iVar3 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uVar1 = *(undefined1 *)(uVar6 + iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x10,s__02x_00965c28,uVar1);
      iVar2 = *(int *)(unaff_EBP + -0x10);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + -4);
      }
      FUN_0045efbb(iVar2,uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(extraout_ECX + 8));
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = 0;
  FUN_00414f8b(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


