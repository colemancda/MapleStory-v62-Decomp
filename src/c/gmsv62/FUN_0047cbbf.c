/* FUN_0047cbbf - 0x0047cbbf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047cbbf(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  iVar3 = DAT_00978368;
  bVar6 = DAT_00978368 != 0;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  if (bVar6) {
    if (*(int *)(iVar3 + 0x2098) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x2098) + 4;
    }
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x969);
    uVar1 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0047c7cc(0,uVar1,iVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    uVar1 = *(undefined4 *)(iVar3 + 0x2048);
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x96a);
    uVar2 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    uVar1 = *(undefined4 *)(iVar3 + 0x204c);
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x96b);
    uVar2 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


