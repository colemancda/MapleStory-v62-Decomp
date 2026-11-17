/* FUN_0084942e - 0x0084942e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084942e(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978358;
  if (DAT_00978358 != 0) {
    if (*(int *)(DAT_00978358 + 0x4e0) == 0) {
      iVar3 = (*DAT_0097b704)();
      if (((1999 < iVar3 - *(int *)(extraout_ECX + 0x311c)) && (-1 < *(int *)(unaff_EBP + 8))) &&
         (*(int *)(unaff_EBP + 8) < 0x17)) {
        FUN_0043f7b6(*(undefined4 *)(unaff_EBP + 8),0xffffffff);
        *(int *)(extraout_ECX + 0x311c) = iVar3;
        FUN_0060142b(0x30,0,0);
        uVar2 = *(undefined4 *)(iVar1 + 0x4d8);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        uVar2 = FUN_00413367(iVar1 + 0x4d0,uVar2);
        FUN_00457d37(uVar2);
        FUN_004751b2(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0045ebca();
      }
    }
    else {
      uVar2 = FUN_00679d22(unaff_EBP + 8,0xd8b);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar2,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


