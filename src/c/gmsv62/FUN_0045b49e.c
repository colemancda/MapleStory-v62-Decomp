/* FUN_0045b49e - 0x0045b49e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045b49e(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    FUN_00464f0d(0x99);
  }
  else if (((*(int *)(extraout_ECX + 0x18) == 0) && (*(int *)(unaff_EBP + 8) != 0)) &&
          (iVar2 = FUN_0045c1e1(unaff_EBP + 8), -1 < iVar2)) {
    FUN_00879c20(unaff_EBP + -0x44,extraout_ECX + 0x49c,0x28);
    iVar2 = FUN_0045d3dd(*(undefined4 *)(unaff_EBP + 8));
    if (iVar2 != -1) {
      if (iVar2 < 9) {
        iVar3 = 9 - iVar2;
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + iVar3;
        puVar4 = (undefined4 *)(unaff_EBP + -0x44 + iVar1);
        do {
          iVar3 = iVar3 + -1;
          *puVar4 = puVar4[1];
          puVar4 = puVar4 + 1;
        } while (iVar3 != 0);
      }
      *(undefined4 *)(unaff_EBP + -0x44 + iVar2 * 4) = 0;
      FUN_0060142b(0xc6,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00457cda(5);
      FUN_00457fa0(unaff_EBP + -0x44,0x28);
      FUN_004751b2(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      *(undefined4 *)(extraout_ECX + 0x4c8) = 1;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


