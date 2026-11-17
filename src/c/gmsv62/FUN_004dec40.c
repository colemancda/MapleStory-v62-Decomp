/* FUN_004dec40 - 0x004dec40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004dec40(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar3;
  int local_30;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0xbc);
  if (iVar1 == 0) {
    local_30 = 0;
    FUN_0060142b(0x6e,0);
    local_30 = 5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda();
    *(int **)(unaff_EBP + -0x10) = &local_30;
    local_30 = 0;
    FUN_00414f8b(extraout_ECX + 0xc0);
    FUN_00459cb5();
    local_30 = 0x4dee4a;
    FUN_004e21db();
    local_30 = 0x4dee51;
    uVar2 = FUN_00485c13();
    *(int **)(unaff_EBP + -0x10) = &local_30;
    local_30 = 0;
    FUN_00414edd(uVar2,0xffffffff);
    FUN_00459cb5();
    local_30 = 0;
    FUN_00457cda();
    local_30 = unaff_EBP + -0x20;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (iVar1 == 1) {
      local_30 = *(int *)(extraout_ECX + 200);
      FUN_00429303();
      FUN_004eb116();
      goto LAB_004dee8d;
    }
    if (iVar1 == 2) {
      local_30 = 3;
      FUN_005c0a5d(*(undefined4 *)(extraout_ECX + 0xc4));
      goto LAB_004dee8d;
    }
    if (iVar1 == 4) {
      local_30 = 0;
      FUN_0060142b(0x71,0);
      local_30 = 0x17;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00457cda();
      *(int **)(unaff_EBP + -0x10) = &local_30;
      local_30 = 0;
      FUN_00414f8b(extraout_ECX + 0xc0);
      FUN_00459cb5();
      local_30 = 0x4dedae;
      FUN_004e21db();
      local_30 = 0x4dedb5;
      uVar2 = FUN_00485c13();
      *(int **)(unaff_EBP + -0x10) = &local_30;
      local_30 = 0;
      FUN_00414edd(uVar2,0xffffffff);
      FUN_00459cb5();
      local_30 = unaff_EBP + -0x20;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else if (iVar1 == 5) {
      local_30 = 0;
      FUN_0060142b(0x84,0);
      local_30 = 0x16;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_00457cda();
      *(int **)(unaff_EBP + -0x10) = &local_30;
      local_30 = 0;
      FUN_00414f8b(extraout_ECX + 0xc0);
      FUN_00459cb5();
      piVar3 = &local_30;
      *(int **)(unaff_EBP + -0x10) = &local_30;
      FUN_004e21db(&local_30);
      FUN_004dee9b(piVar3);
      FUN_00459cb5();
      local_30 = unaff_EBP + -0x30;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      if (iVar1 != 7) goto LAB_004dee8d;
      local_30 = 0;
      FUN_0060142b(0x73,0);
      local_30 = 0x37;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00457cda();
      *(int **)(unaff_EBP + -0x10) = &local_30;
      local_30 = 0;
      FUN_00414f8b(extraout_ECX + 0xc0);
      FUN_00459cb5();
      local_30 = 0x4decc4;
      FUN_004e21db();
      local_30 = 0x4deccb;
      uVar2 = FUN_00485c13();
      *(int **)(unaff_EBP + -0x10) = &local_30;
      local_30 = 0;
      FUN_00414edd(uVar2,0xffffffff);
      FUN_00459cb5();
      local_30 = unaff_EBP + -0x20;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  local_30 = 0x4dee8d;
  FUN_0045ebca();
LAB_004dee8d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


