/* FUN_004fa622 - 0x004fa622 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fa622(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  undefined4 *puVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_004eb96a();
  iVar5 = FUN_007d1e08();
  iVar1 = *(int *)(extraout_ECX + 0x74c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  if (0x96 < iVar5 - iVar1) {
    *(int *)(extraout_ECX + 0x74c) = iVar5;
    FUN_004fa96d();
  }
  puVar7 = *(undefined4 **)(extraout_ECX + 0x734);
  while (puVar4 = puVar7, puVar4 != (undefined4 *)0x0) {
    *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
    iVar1 = *(int *)((-(uint)(puVar4 != (undefined4 *)0x0) & (uint)(puVar4 + -4)) + 4);
    puVar7 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    if (puVar4[2] == *(int *)(unaff_EBP + -0x10) || puVar4[2] - *(int *)(unaff_EBP + -0x10) < 0) {
      puVar6 = (undefined4 *)FUN_004fae10(unaff_EBP + -0x14,*puVar4);
      uVar2 = puVar4[1];
      uVar3 = *puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_005a8209(uVar3,uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      FUN_004faf09(puVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


