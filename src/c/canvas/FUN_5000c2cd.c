/* FUN_5000c2cd - 0x5000c2cd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000c2cd(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int unaff_EBP;
  
  FUN_50012d80();
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  if ((puVar3[0xc] == 0) || (puVar3[0xd] == 0)) {
    uVar7 = 0x80004005;
    goto LAB_5000c3a7;
  }
  puVar1 = puVar3 + 8;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_500024f7();
  iVar6 = puVar3[0xb];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar6 == *(int *)(unaff_EBP + 0xc)) {
    piVar2 = puVar3 + 9;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    uVar5 = ((puVar3[0xd] - 1) + *(int *)(unaff_EBP + 0xc)) / (uint)puVar3[0xd];
    if (uVar5 < (uint)puVar3[0xf]) {
      iVar6 = puVar3[0xe];
LAB_5000c344:
      FUN_5000c753(puVar3 + 0x10,iVar6 * uVar5,0);
    }
    else if ((uint)puVar3[0xf] < uVar5) {
      iVar6 = puVar3[0xe];
      goto LAB_5000c344;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puVar3[0xf] = uVar5;
    piVar2 = puVar3 + 9;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    uVar5 = puVar3[0xb];
    puVar3[0xb] = *(undefined4 *)(unaff_EBP + 0xc);
    FUN_5000b444((int)puVar3);
    uVar4 = puVar3[0xb];
    uVar8 = uVar5;
    if (uVar4 <= uVar5) {
      uVar8 = uVar4;
    }
    uVar7 = 0xffffff;
    *(undefined4 *)(unaff_EBP + 0xc) = *puVar3;
    iVar6 = abs(uVar5 - uVar4);
    (**(code **)(*(int *)(unaff_EBP + 0xc) + 0x8c))(puVar3,0,uVar8,puVar3[10],iVar6,uVar7);
  }
  uVar7 = 0;
LAB_5000c3a7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


