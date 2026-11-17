/* FUN_00780ff4 - 0x00780ff4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00780ff4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  *(int *)(unaff_EBP + -0x1c) = DAT_00978368;
  if ((*(int *)(extraout_ECX + 0x5e4) != 0) && (*(int *)(extraout_ECX + 0x620) == 0)) {
    iVar1 = *(int *)(iVar1 + 0x2cdc);
    uVar4 = (*DAT_0097b704)();
    if (uVar4 < iVar1 + 300000U) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puVar5 = (undefined4 *)FUN_00781143(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puVar6 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x1105);
      uVar2 = *puVar5;
      uVar3 = *puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0041354c(unaff_EBP + -0x10,uVar3,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      piVar7 = (int *)FUN_0078111f(unaff_EBP + -0x1c);
      iVar1 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + -4) >> 1;
      }
      FUN_0046febf(iVar1,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      FUN_0080cd3b(*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x620) = 1;
      FUN_00402676();
    }
  }
  uVar4 = (*DAT_0097b704)();
  if (*(int *)(extraout_ECX + 0x638) + 180000U < uVar4) {
    FUN_0078232d();
  }
  FUN_0080bb5a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


