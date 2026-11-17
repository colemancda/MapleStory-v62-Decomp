/* FUN_007511e2 - 0x007511e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007511e2(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00414f29();
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((iVar2 == 0) && (*(int *)(unaff_EBP + 0xc) == 0)) goto LAB_0075134c;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    if (iVar2 == 0) goto LAB_0075134c;
    iVar5 = (*DAT_0097b4ac)(iVar2,&DAT_008f1068);
    if (-1 < iVar5) goto LAB_0075134c;
    iVar5 = (*DAT_0097b4ac)(iVar2,&DAT_008f1060);
    if (iVar5 < 1) goto LAB_0075134c;
    (*DAT_0097b4b0)(iVar2,unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x296);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(uVar1,uVar3,*(undefined2 *)(unaff_EBP + -0x1a),*(undefined2 *)(unaff_EBP + -0x16)
                   ,*(undefined2 *)(unaff_EBP + -0x1c),*(undefined2 *)(unaff_EBP + -0x14),
                   *(undefined2 *)(unaff_EBP + -0x12));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0xc06);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(uVar1,uVar3,*(undefined2 *)(unaff_EBP + -0x1a),*(undefined2 *)(unaff_EBP + -0x16)
                   ,*(undefined2 *)(unaff_EBP + -0x1c),*(undefined2 *)(unaff_EBP + -0x14),
                   *(undefined2 *)(unaff_EBP + -0x12));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  else if (*(int *)(unaff_EBP + 0x18) == 0) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x10,0x294);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(uVar1,uVar3,*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x295);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00434e21(uVar1,uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
LAB_0075134c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


