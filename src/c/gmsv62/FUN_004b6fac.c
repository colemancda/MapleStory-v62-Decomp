/* FUN_004b6fac - 0x004b6fac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b6fac(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  int extraout_ECX;
  uint uVar7;
  int iVar8;
  int unaff_EBP;
  uint uVar9;
  uint local_30;
  
  FUN_00879bb8();
  uVar9 = *(uint *)(unaff_EBP + 8);
  local_30 = 8;
  FUN_00457fa0(unaff_EBP + 0xc);
  if ((*(uint *)(unaff_EBP + 0xc) & 1) != 0) {
    local_30 = uVar9;
    FUN_004b4e94();
    local_30 = (uint)*(byte *)(extraout_ECX + 0x473);
    FUN_00457cda();
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 2) != 0) {
    local_30 = uVar9;
    FUN_004b509b();
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x80) != 0) {
    piVar6 = (int *)(extraout_ECX + 999);
    iVar8 = 5;
    do {
      uVar2 = 0;
      if (*piVar6 != 0) {
        uVar2 = *(undefined4 *)(*piVar6 + -4);
      }
      local_30 = CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar2 + -1);
      FUN_00457cda();
      piVar6 = piVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 4) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    piVar6 = (int *)(extraout_ECX + 0xdf);
    do {
      if (*piVar6 != 0) {
        local_30 = *(uint *)(unaff_EBP + -0x10);
        FUN_00457cda();
        local_30 = *(uint *)(unaff_EBP + 8);
        FUN_004b57b6();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      piVar6 = piVar6 + 2;
    } while (*(int *)(unaff_EBP + -0x10) < 0x31);
    local_30 = 0;
    FUN_00457cda();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    piVar6 = (int *)(extraout_ECX + 0x267);
    do {
      if (*piVar6 != 0) {
        local_30 = *(uint *)(unaff_EBP + -0x10);
        FUN_00457cda();
        local_30 = *(uint *)(unaff_EBP + 8);
        FUN_004b57b6();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      piVar6 = piVar6 + 2;
    } while (*(int *)(unaff_EBP + -0x10) < 0x31);
    local_30 = 0;
    FUN_00457cda();
    iVar8 = 0;
    if (*(int *)(extraout_ECX + 999) != 0) {
      iVar8 = *(int *)(*(int *)(extraout_ECX + 999) + -4);
    }
    uVar9 = 1;
    if (0 < iVar8 + -1) {
      do {
        if (*(int *)(*(int *)(extraout_ECX + 999) + 4 + uVar9 * 8) != 0) {
          local_30 = uVar9;
          FUN_00457cda();
          local_30 = *(uint *)(unaff_EBP + 8);
          FUN_004b57b6();
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 <= iVar8 + -1);
    }
    local_30 = 0;
    FUN_00457cda();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 2;
  do {
    iVar8 = *(int *)(unaff_EBP + -0x10);
    if (iVar8 == 1) {
      local_30 = 4;
    }
    else if (iVar8 == 2) {
      local_30 = 8;
    }
    else if (iVar8 == 3) {
      local_30 = 0x10;
    }
    else if (iVar8 == 4) {
      local_30 = 0x20;
    }
    else if (iVar8 == 5) {
      local_30 = 0x40;
    }
    else {
      local_30 = 0;
    }
    if ((local_30 & *(uint *)(unaff_EBP + 0xc)) != 0) {
      piVar6 = (int *)(extraout_ECX + 0x3e3 + *(int *)(unaff_EBP + -0x10) * 4);
      iVar8 = *piVar6;
      iVar3 = 0;
      if (iVar8 != 0) {
        iVar3 = *(int *)(iVar8 + -4);
      }
      uVar9 = 1;
      *(int *)(unaff_EBP + -0x18) = iVar3 + -1;
      if (0 < iVar3 + -1) {
        do {
          if (*(int *)(*piVar6 + 4 + uVar9 * 8) != 0) {
            local_30 = uVar9;
            FUN_00457cda();
            local_30 = *(uint *)(unaff_EBP + 8);
            FUN_004b57b6();
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 <= *(int *)(unaff_EBP + -0x18));
      }
      local_30 = 0;
      FUN_00457cda();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 6);
  if ((*(uint *)(unaff_EBP + 0xc) & 0x100) != 0) {
    local_30 = *(uint *)(extraout_ECX + 0x407);
    FUN_0045d247();
    piVar6 = *(int **)(extraout_ECX + 0x3ff);
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + *(int *)(extraout_ECX + 0x403);
      for (; piVar6 < piVar1; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          iVar8 = *piVar6;
          goto LAB_004b71f2;
        }
      }
    }
    iVar8 = 0;
LAB_004b71f2:
    *(int *)(unaff_EBP + -0x14) = iVar8;
    while (iVar8 != 0) {
      local_30 = unaff_EBP - 0x1c;
      puVar4 = (uint *)FUN_004b9043(unaff_EBP + -0x14);
      local_30 = *puVar4;
      *(uint *)(unaff_EBP + -0x10) = local_30;
      FUN_00457d37();
      local_30 = *(uint *)(unaff_EBP + -0x1c);
      FUN_00457d37();
      iVar8 = *(int *)(unaff_EBP + -0x10) / 10000;
      if ((iVar8 % 100 != 0) && (iVar8 % 10 == 2)) {
        local_30 = unaff_EBP - 0x20;
        FUN_004b8f25(unaff_EBP + -0x10);
        local_30 = *(uint *)(unaff_EBP + -0x20);
        FUN_00457d37();
      }
      iVar8 = *(int *)(unaff_EBP + -0x14);
    }
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x8000) == 0) {
    uVar9 = *(uint *)(unaff_EBP + 8);
  }
  else {
    uVar9 = *(uint *)(unaff_EBP + 8);
    local_30 = *(uint *)(extraout_ECX + 0x437);
    FUN_0045d247();
    piVar6 = *(int **)(extraout_ECX + 0x42f);
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + *(int *)(extraout_ECX + 0x433);
      for (; piVar6 < piVar1; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          iVar8 = *piVar6;
          goto LAB_004b72b1;
        }
      }
    }
    iVar8 = 0;
LAB_004b72b1:
    *(int *)(unaff_EBP + -0x14) = iVar8;
    while (iVar8 != 0) {
      local_30 = unaff_EBP - 0x20;
      puVar4 = (uint *)FUN_004b91c9(unaff_EBP + -0x14);
      local_30 = *puVar4;
      FUN_00457d37();
      local_30 = *(uint *)(unaff_EBP + -0x20);
      FUN_0045d247();
      iVar8 = *(int *)(unaff_EBP + -0x14);
    }
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x200) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    local_30 = *(uint *)(extraout_ECX + 0x53f);
    FUN_0045d247();
    piVar6 = *(int **)(extraout_ECX + 0x537);
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + *(int *)(extraout_ECX + 0x53b);
      for (; piVar6 < piVar1; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          iVar8 = *piVar6;
          goto LAB_004b7334;
        }
      }
    }
    iVar8 = 0;
LAB_004b7334:
    *(int *)(unaff_EBP + -0x14) = iVar8;
    while (iVar8 != 0) {
      local_30 = unaff_EBP - 0x10;
      puVar5 = (undefined2 *)FUN_004b97dc(unaff_EBP + -0x14);
      local_30 = CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5);
      FUN_0045d247();
      local_30 = 0;
      *(uint **)(unaff_EBP + -0x20) = &local_30;
      FUN_00414f8b(unaff_EBP + -0x10);
      FUN_00459cb5();
      iVar8 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_30 = 0x4b7380;
    FUN_00414ebb();
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x4000) != 0) {
    local_30 = *(uint *)(extraout_ECX + 0x44f);
    FUN_0045d247();
    piVar6 = *(int **)(extraout_ECX + 0x447);
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + *(int *)(extraout_ECX + 1099);
      for (; piVar6 < piVar1; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          iVar8 = *piVar6;
          goto LAB_004b73c5;
        }
      }
    }
    iVar8 = 0;
LAB_004b73c5:
    *(int *)(unaff_EBP + -0x14) = iVar8;
    while (iVar8 != 0) {
      local_30 = unaff_EBP - 0x24;
      puVar5 = (undefined2 *)FUN_004b935e(unaff_EBP + -0x14);
      local_30 = CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5);
      FUN_0045d247();
      local_30 = 8;
      FUN_00457fa0(unaff_EBP + -0x24);
      iVar8 = *(int *)(unaff_EBP + -0x14);
    }
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x400) != 0) {
    local_30 = *(uint *)(extraout_ECX + 0x467);
    FUN_0045d247();
    piVar6 = *(int **)(extraout_ECX + 0x45f);
    if (piVar6 != (int *)0x0) {
      piVar1 = piVar6 + *(int *)(extraout_ECX + 0x463);
      for (; piVar6 < piVar1; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          iVar8 = *piVar6;
          goto LAB_004b7442;
        }
      }
    }
    iVar8 = 0;
LAB_004b7442:
    *(int *)(unaff_EBP + -0x18) = iVar8;
    while (iVar8 != 0) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      local_30 = unaff_EBP - 0x2c;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puVar4 = (uint *)FUN_004b94b2(unaff_EBP + -0x18);
      local_30 = *puVar4;
      FUN_00457d37();
      local_30 = *(uint *)(*(int *)(unaff_EBP + -0x28) + 4);
      FUN_00457d37();
      local_30 = *(uint *)(*(int *)(unaff_EBP + -0x28) + 8);
      FUN_00457d37();
      local_30 = *(uint *)(*(int *)(unaff_EBP + -0x28) + 0xc);
      FUN_00457d37();
      local_30 = *(uint *)(*(int *)(unaff_EBP + -0x28) + 0x10);
      FUN_00457d37();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        local_30 = 0;
        FUN_004b8bd2();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      iVar8 = *(int *)(unaff_EBP + -0x18);
    }
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x800) != 0) {
    local_30 = *(uint *)(extraout_ECX + 0x47f);
    FUN_0045d247();
    uVar7 = *(uint *)(extraout_ECX + 0x483);
    while (uVar7 != 0) {
      iVar8 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
      local_30 = uVar9;
      FUN_004b69f6();
      uVar7 = -(uint)(iVar8 != 0) & iVar8 + 0x10U;
    }
    local_30 = *(uint *)(extraout_ECX + 0x493);
    FUN_0045d247();
    uVar7 = *(uint *)(extraout_ECX + 0x497);
    while (uVar7 != 0) {
      iVar8 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
      local_30 = uVar9;
      FUN_004b6a14();
      uVar7 = -(uint)(iVar8 != 0) & iVar8 + 0x10U;
    }
    local_30 = *(uint *)(extraout_ECX + 0x4a7);
    FUN_0045d247();
    uVar7 = *(uint *)(extraout_ECX + 0x4ab);
    while (uVar7 != 0) {
      iVar8 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
      local_30 = uVar9;
      FUN_004b699c();
      uVar7 = -(uint)(iVar8 != 0) & iVar8 + 0x10U;
    }
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x1000) != 0) {
    puVar4 = (uint *)(extraout_ECX + 0x4b3);
    iVar8 = 5;
    do {
      local_30 = *puVar4;
      FUN_00457d37();
      puVar4 = puVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar4 = (uint *)(extraout_ECX + 0x4c7);
    iVar8 = 10;
    do {
      local_30 = *puVar4;
      FUN_00457d37();
      puVar4 = puVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(uint *)(unaff_EBP + 0xc) & 0x20000) != 0) {
    local_30 = *(uint *)(extraout_ECX + 0x527);
    FUN_00457d37();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


