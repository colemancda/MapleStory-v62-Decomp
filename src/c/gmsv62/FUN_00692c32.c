/* FUN_00692c32 - 0x00692c32 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00692c32(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xfc) == 0) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x350);
    uVar1 = *puVar3;
    uVar2 = *(undefined4 *)(extraout_ECX + 0xf4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_0069332d(uVar1,uVar2,uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if ((0 < iVar4) && (iVar4 <= *(int *)(extraout_ECX + 0xf4))) {
      FUN_0060142b(0x3a,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00457cda(7);
      FUN_00457d37(iVar4);
      FUN_004751b2(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0xfc) = 1;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


