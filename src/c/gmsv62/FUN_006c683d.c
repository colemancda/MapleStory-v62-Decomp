/* FUN_006c683d - 0x006c683d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006c683d(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 0xc);
  iStack_20 = *(undefined4 *)(unaff_EBP + 8);
  iStack_24 = 0x6c685e;
  iStack_1c = iVar4;
  iVar3 = FUN_006c69a5();
  if ((iVar3 < 0x5b) && (iVar3 != -1)) {
    iStack_1c = 5;
    piVar1 = extraout_ECX + iVar3 * 3 + 0x15d;
    iStack_20 = 0x6c6887;
    FUN_00526a75();
    cVar2 = (char)*piVar1;
    if ((cVar2 == '\x02') || (cVar2 == '\a')) {
      iStack_1c = *(int *)((int)piVar1 + 1);
      iStack_20 = unaff_EBP + -0x18;
      iStack_24 = 0x6c690b;
      FUN_00554ef3();
      iStack_1c = 1;
      *(int **)(unaff_EBP + -0x10) = &iStack_24;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0068684c(0);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piVar5 = (int *)FUN_0053793e();
      iVar4 = *piVar5;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar6 = (**(code **)(iVar4 + 4))(0,0,0,0,0,0,0,0,0);
      iVar3 = FUN_0053793e(uVar6);
      iVar3 = iVar3 + 0x20;
      uVar8 = *(undefined4 *)((int)piVar1 + 1);
      iVar4 = (**(code **)(*extraout_ECX + 0x30))(uVar8,iVar3);
      iVar4 = iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar7 = (**(code **)(*extraout_ECX + 0x2c))(iVar4);
      FUN_007529b7(iVar7 + *(int *)(unaff_EBP + 8),iVar4,uVar8,iVar3,uVar6,uVar9,uVar10,uVar11,
                   uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        iStack_1c = 0;
        iStack_20 = 0x6c6982;
        FUN_00449913();
      }
    }
    else if (cVar2 == '\x01') {
      iStack_1c = 1;
      iStack_20 = *(int *)((int)piVar1 + 1);
      iStack_24 = 0x6c68a5;
      iStack_20 = FUN_0064d61f();
      iStack_24 = 0x6c68ad;
      iVar3 = (**(code **)(*extraout_ECX + 0x30))();
      iStack_24 = iVar3 + 0x14 + iVar4;
      iVar4 = (**(code **)(*extraout_ECX + 0x2c))();
      FUN_00755feb(iVar4 + *(int *)(unaff_EBP + 8));
    }
    else if (cVar2 == '\b') {
      iStack_1c = *(int *)((int)piVar1 + 1);
      iStack_20 = 0x6c68dc;
      iVar3 = (**(code **)(*extraout_ECX + 0x30))();
      iStack_20 = iVar3 + 0x14 + iVar4;
      iStack_24 = 0x6c68e8;
      iStack_24 = (**(code **)(*extraout_ECX + 0x30))();
      iStack_24 = iStack_24 + *(int *)(unaff_EBP + 8);
      FUN_00755c88();
    }
  }
  else if (extraout_ECX[0x1b] != 1) {
    iStack_1c = 0x6c6992;
    FUN_0074d6fb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


