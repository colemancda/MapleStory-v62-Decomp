/* FUN_004751b2 - 0x004751b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004751b2(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 0x7c);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_00402aba();
  iVar4 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((iVar4 == 0) || (iVar4 == -1)) || (*(int *)(extraout_ECX + 0x14) != 0)) {
    piVar2 = (int *)(extraout_ECX + 0x80);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    FUN_0060142b(0x7fffffff,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar3 = (undefined4 *)(extraout_ECX + 0x84);
    while( true ) {
      iVar4 = FUN_00866da3(*(undefined2 *)puVar3,unaff_EBP + -0x20);
      if (iVar4 == 0) break;
      FUN_006014d3(extraout_ECX + 0x50,0x3e,puVar3,1,*puVar3);
      uVar5 = FUN_00865db5(puVar3,4,0);
      *puVar3 = uVar5;
    }
    puVar3 = (undefined4 *)(extraout_ECX + 0x84);
    FUN_006014d3(extraout_ECX + 0x50,0x3e,puVar3,1,*(undefined4 *)(extraout_ECX + 0x84));
    uVar5 = FUN_00865db5(puVar3,4,0);
    *puVar3 = uVar5;
    FUN_004752aa();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0045ebca();
    piVar2 = (int *)(extraout_ECX + 0x80);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


