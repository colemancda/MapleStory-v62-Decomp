/* FUN_007ae5e4 - 0x007ae5e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ae5e4(void)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar5 = DAT_00978368;
  *(undefined4 *)(DAT_00978368 + 0x208c) = 0;
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(iVar5 + 0x2090) = uVar4;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\0') {
    iVar5 = FUN_0055a766();
    extraout_ECX[0x7be] = iVar5;
    iVar5 = FUN_00413367(extraout_ECX + 0x902,extraout_ECX[0x904]);
    if (iVar5 != 0) {
      (**(code **)(*extraout_ECX + 0x30))(0);
    }
  }
  else {
    uVar3 = FUN_00424561();
    iVar5 = FUN_00429303();
    piVar1 = (int *)(*(int *)(iVar5 + 0x138) + (uint)uVar3 * 8);
    *(int *)(unaff_EBP + -0x1c) = *piVar1 + -10;
    *(int *)(unaff_EBP + -0x18) = piVar1[1] + -0x1e;
    *(int *)(unaff_EBP + -0x14) = *piVar1 + 10;
    *(int *)(unaff_EBP + -0x10) = piVar1[1] + 0x1e;
    puVar6 = (undefined4 *)(**(code **)(extraout_ECX[1] + 0x10))();
    iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x1c,*puVar6,puVar6[1]);
    if (iVar5 == 0) {
      iVar5 = FUN_0055a766();
      extraout_ECX[0x7be] = iVar5;
      FUN_0083a6ec(0);
    }
    else {
      iVar5 = FUN_0055a766();
      extraout_ECX[0x7be] = iVar5;
      FUN_00486ada(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00803f9a(*piVar1,piVar1[1]);
      piVar1 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


