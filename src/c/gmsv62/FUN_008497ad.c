/* FUN_008497ad - 0x008497ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008497ad(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  uint uVar5;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar3 + 0xbc);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar1 != 1) {
    piVar4 = (int *)(extraout_ECX + 0x3228);
    for (uVar5 = 0; (iVar2 = *piVar4, iVar2 != 0 && (uVar5 < *(uint *)(iVar2 + -4)));
        uVar5 = uVar5 + 1) {
      iVar2 = *(int *)(iVar2 + 4 + uVar5 * 8);
      if ((iVar1 == *(int *)(iVar2 + 0xbc)) &&
         ((iVar1 != 6 || (*(short *)(iVar2 + 0xe0) == *(short *)(iVar3 + 0xe0))))) {
        FUN_00815de9();
        FUN_0084f0cb(*piVar4 + uVar5 * 8);
        for (; (*piVar4 != 0 && (uVar5 < *(uint *)(*piVar4 + -4))); uVar5 = uVar5 + 1) {
          FUN_004deebf();
        }
        iVar3 = *(int *)(unaff_EBP + 8);
        break;
      }
    }
  }
  uVar5 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar5 != 0) & uVar5 - 8;
  FUN_0084ec65();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_0084f03b(0xffffffff);
  FUN_0084ec65();
  FUN_0084212c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  FUN_0084212c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


