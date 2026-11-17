/* FUN_0069e195 - 0x0069e195 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069e195(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 2) {
    bVar1 = true;
    if (*(int *)(unaff_EBP + 8) == 1) {
      FUN_0045b90e(unaff_EBP + -0x10);
      uVar5 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0045ed72(0);
      puVar3 = (undefined4 *)FUN_0045ee27(uVar5);
      if (((char *)*puVar3 != (char *)0x0) && (*(char *)*puVar3 != '\0')) {
        bVar1 = false;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      if (bVar1) goto LAB_0069e2b6;
    }
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        FUN_00815de9();
      }
    }
    iVar2 = DAT_00978368;
    if (*(int *)(unaff_EBP + 8) == 1) {
      DVar4 = timeGetTime();
      *(DWORD *)(iVar2 + 0x3294) = *(int *)(extraout_ECX + 0x90) - DVar4;
      FUN_0060142b(0x60,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puVar3 = (undefined4 *)FUN_0045b90e(unaff_EBP + 8);
      uVar5 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar5 = FUN_0087b6ab(uVar5);
      FUN_0045d247(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      FUN_004751b2(unaff_EBP + -0x20);
      if (DAT_0097bce8 != 0) {
        FUN_00815de9();
        if (DAT_0097bce8 != 0) {
          (*(code *)**(undefined4 **)(DAT_0097bce8 + 8))(1);
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
LAB_0069e2b6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


