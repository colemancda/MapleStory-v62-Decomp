/* FUN_007d3411 - 0x007d3411 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d3411(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_0087b4c0(iVar1,0x2d);
    if (iVar3 != 0) {
      iVar3 = iVar3 - iVar1;
      goto LAB_007d3441;
    }
  }
  iVar3 = -1;
LAB_007d3441:
  uVar4 = FUN_0045ece0(unaff_EBP + -0x10,0,iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  if (iVar3 < 1) {
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x14,0x870);
    uVar4 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(*(undefined4 *)(unaff_EBP + 0x10),uVar4,&DAT_00965728);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (*(int *)(unaff_EBP + 0x14) == 0) {
    uVar4 = FUN_0045ece0(unaff_EBP + 0x14,iVar3 + 1,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414f8b(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    puVar5 = (undefined4 *)FUN_0045ece0(unaff_EBP + -0x10,iVar3 + 1,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x14,0x870);
    uVar4 = *puVar5;
    uVar2 = *puVar6;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(*(undefined4 *)(unaff_EBP + 0x10),uVar2,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  FUN_006543b6();
  FUN_006543b6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


