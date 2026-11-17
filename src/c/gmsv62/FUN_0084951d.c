/* FUN_0084951d - 0x0084951d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084951d(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  bool bVar5;
  
  FUN_00879bb8();
  iVar1 = DAT_00978358;
  bVar5 = DAT_00978358 != 0;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (bVar5) {
    if ((*(int *)(iVar1 + 0x4e0) == 0) && (*(int *)(iVar1 + 0x4f4) == 0)) {
      iVar2 = (*DAT_0097b704)();
      if (1999 < iVar2 - *(int *)(extraout_ECX + 0x3120)) {
        iVar4 = *(int *)(unaff_EBP + 8);
        if ((iVar4 / 10000 == 0x1f5) || (iVar4 / 10000 == 0x1ad)) {
          if (*(int *)(iVar1 + 0x1df4) == iVar4) {
            iVar4 = 0;
          }
          else {
            *(int *)(*(int *)(unaff_EBP + -0x10) + 0x3120) = iVar2;
          }
          FUN_0079757b(iVar4);
          FUN_0060142b(0x31,0,0);
          *(undefined4 *)(unaff_EBP + -4) = 1;
          FUN_00457d37(iVar4);
          FUN_004751b2(unaff_EBP + -0x20);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045ebca();
        }
      }
    }
    else {
      uVar3 = FUN_00679d22(unaff_EBP + 8,0xd8b);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar3,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


