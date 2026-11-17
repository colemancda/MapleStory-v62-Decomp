/* FUN_00601254 - 0x00601254 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00601254(void)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  
  FUN_00879bb8();
  iVar7 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  sVar2 = *(short *)(extraout_ECX + 0xc);
  iVar3 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (sVar2 != 0) {
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uVar1 = *(undefined1 *)(iVar7 + iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x10,s__02x_00965c28,uVar1);
      iVar4 = *(int *)(unaff_EBP + -0x10);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar4 + -4);
      }
      FUN_0045efbb(iVar4,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(ushort *)(extraout_ECX + 0xc));
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = 0;
  FUN_00414f8b(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


