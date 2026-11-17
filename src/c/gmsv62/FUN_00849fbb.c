/* FUN_00849fbb - 0x00849fbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00849fbb(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  uStack_34 = 0x849fd8;
  uVar1 = FUN_0042452b();
  uStack_34 = 0x849fe3;
  cVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  switch(uVar1) {
  case 2:
  case 3:
    puVar6 = (undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0x4c7);
    if (cVar2 == '\0') {
      puVar6 = (undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0x4b3);
    }
    iVar3 = (-(uint)(cVar2 != '\0') & 5) + 5;
    if (iVar3 != 0) {
      *(int *)(unaff_EBP + -0x14) = iVar3;
      puVar7 = puVar6;
      do {
        uStack_34 = 0x84a02e;
        uVar4 = FUN_0042459a();
        *puVar7 = uVar4;
        puVar7 = puVar7 + 1;
        piVar5 = (int *)(unaff_EBP + -0x14);
        *piVar5 = *piVar5 + -1;
      } while (*piVar5 != 0);
    }
    uVar4 = 0;
    if (DAT_0097bd50 != 0) {
      uStack_34 = 1;
      iStack_3c = 0x84a04a;
      puStack_38 = puVar6;
      FUN_006cc7ed();
      uVar4 = extraout_ECX_00;
    }
    goto LAB_0084a04d;
  default:
    goto switchD_00849ff6_caseD_4;
  case 5:
    uStack_34 = 499;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x20);
    iStack_3c = 0x84a0dd;
    puVar6 = (undefined4 *)FUN_00679d22();
    uStack_34 = *puVar6;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_3c = 0x84a0ec;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 6:
  case 7:
    uStack_34 = 0xb40;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x28);
    iStack_3c = 0x84a13b;
    piVar5 = (int *)FUN_00679d22();
    uStack_34 = *(undefined4 *)(extraout_ECX + 0x328c);
    puStack_38 = (undefined4 *)*piVar5;
    iStack_3c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_40 = 0x84a151;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 8:
    uStack_34 = 0xb63;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_3c = 0x84a16f;
    puVar6 = (undefined4 *)FUN_00679d22();
    uStack_34 = *puVar6;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_3c = 0x84a17e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 9:
    uStack_34 = 0xb46;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x24);
    iStack_3c = 0x84a10c;
    puVar6 = (undefined4 *)FUN_00679d22();
    uStack_34 = *puVar6;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_3c = 0x84a11b;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 10:
    uStack_34 = 0xb43;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x1c);
    iStack_3c = 0x84a0ae;
    puVar6 = (undefined4 *)FUN_00679d22();
    uStack_34 = *puVar6;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_3c = 0x84a0bd;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xb:
    uStack_34 = 0xb47;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x30);
    iStack_3c = 0x84a19b;
    puVar6 = (undefined4 *)FUN_00679d22();
    uStack_34 = *puVar6;
    puStack_38 = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_3c = 0x84a1aa;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  uStack_34 = 0x84a1b7;
  FUN_00414ebb();
  uVar4 = extraout_ECX_01;
LAB_0084a04d:
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    uStack_34 = 0;
    puStack_38 = (undefined4 *)0x0;
    iStack_3c = 0;
    uStack_40 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_44;
    uStack_44 = uVar4;
    FUN_00450368(unaff_EBP + -0x10);
    FUN_007db3ad();
  }
switchD_00849ff6_caseD_4:
  uStack_34 = 0x84a07e;
  FUN_00414f29();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_34 = 0x84a08a;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


