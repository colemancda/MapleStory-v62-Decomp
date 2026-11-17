/* FUN_006f237f - 0x006f237f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006f237f(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = (*DAT_0097b57c)(extraout_ECX + 0x594,*(undefined4 *)(unaff_EBP + 0x10),
                          *(undefined4 *)(unaff_EBP + 0x14));
  if (iVar1 == 0) {
    FUN_0074d6fb();
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x14) = 0;
    iVar1 = *(int *)(extraout_ECX + 0x5a4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x1001);
      uVar4 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + 0x14,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x1002);
      uVar4 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00434e21(unaff_EBP + 0x14,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    FUN_00414ebb();
    uVar4 = *(undefined4 *)(unaff_EBP + 0x14);
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))(uVar4);
    iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
    FUN_0074d755(iVar3 + 0x14 + *(int *)(unaff_EBP + 8),iVar1,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    uVar4 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


