/* FUN_0072c3ce - 0x0072c3ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072c3ce(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 8);
  if (uVar1 != 0) {
    iVar3 = (**(code **)(*(int *)(uVar1 + 4) + 0x48))(&DAT_00979144);
    FUN_0045e196(-(uint)(iVar3 != 0) & uVar1);
    if (*(int *)(extraout_ECX + 0x90) != 0) {
      puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
      *(undefined4 *)(extraout_ECX + 0x98) = *puVar2;
      *(undefined4 *)(extraout_ECX + 0x9c) = puVar2[1];
      *(undefined4 *)(extraout_ECX + 0xa0) = puVar2[2];
      piVar4 = (int *)FUN_0045b90e(unaff_EBP + 8);
      iVar3 = *piVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar3 + -4);
      }
      FUN_0072c6a4(uVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


