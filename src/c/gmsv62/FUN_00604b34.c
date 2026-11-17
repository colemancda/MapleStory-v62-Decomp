/* FUN_00604b34 - 0x00604b34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00604b34(void)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar3;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  if ((*extraout_ECX != 0) && (uVar1 = *(uint *)(*extraout_ECX + -4), uVar1 != 0)) {
    uStack_48 = extraout_ECX[1];
    if (((int)uStack_48 < 0) || ((9 < (int)uStack_48 || (uVar1 <= uStack_48)))) {
      *(uint **)(unaff_EBP + -0x10) = &uStack_48;
      uVar3 = 0xee9;
    }
    else {
      FUN_00429303();
      FUN_004f0de4();
      iStack_40 = 0x604b96;
      SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x38),(LPFILETIME)(unaff_EBP + -0x18));
      iVar2 = *(int *)(*extraout_ECX + 4 + extraout_ECX[1] * 8);
      uVar1 = *(uint *)(iVar2 + 0x15);
      iStack_44 = uVar1 - *(uint *)(unaff_EBP + -0x18);
      iStack_40 = (*(int *)(iVar2 + 0x19) - *(int *)(unaff_EBP + -0x14)) -
                  (uint)(uVar1 < *(uint *)(unaff_EBP + -0x18));
      uStack_48 = 0x604bbc;
      iVar2 = __aulldiv();
      if (iVar2 < 0x1e) {
        iStack_40 = 0x3d;
        iStack_44 = 0x604bdc;
        FUN_0060142b();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00457cda();
        FUN_00457d37();
        FUN_004751b2();
        FUN_00609358();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0045ebca();
        goto LAB_00604c44;
      }
      *(uint **)(unaff_EBP + -0x10) = &uStack_48;
      uVar3 = 0xeea;
      uStack_48 = extraout_ECX_00;
    }
    iStack_40 = 0;
    iStack_44 = 0;
    FUN_00679d22(&uStack_48,uVar3);
    FUN_007db3ad();
  }
LAB_00604c44:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


