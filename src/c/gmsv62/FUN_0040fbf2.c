/* FUN_0040fbf2 - 0x0040fbf2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_0040fbf2(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 *local_10;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 0x18);
  iVar7 = *(int *)(unaff_EBP + 0xc);
  puVar6 = *(undefined1 **)(unaff_EBP + 8);
  local_10 = (undefined1 *)0x0;
  uVar1 = *(uint *)(unaff_EBP + 0x18);
  FUN_0040fdc3(puVar6,iVar7,iVar7 + 2000,*(undefined4 *)(unaff_EBP + 0x14));
  switch(puVar6) {
  case (undefined1 *)0x63:
    puVar3 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)0x0;
    break;
  case (undefined1 *)0x64:
    local_10 = (undefined1 *)0x2;
    puVar3 = local_10;
    puVar6 = local_10;
    break;
  case (undefined1 *)0x65:
    local_10 = (undefined1 *)0x23;
    puVar3 = local_10;
    puVar6 = local_10;
    break;
  case (undefined1 *)0x66:
    local_10 = (undefined1 *)0x20;
    puVar3 = local_10;
    puVar6 = local_10;
    break;
  case (undefined1 *)0x67:
    local_10 = (undefined1 *)0x22;
    puVar3 = local_10;
    puVar6 = local_10;
    break;
  case (undefined1 *)0x68:
    local_10 = (undefined1 *)0x24;
    puVar3 = local_10;
    puVar6 = local_10;
    break;
  case (undefined1 *)0x69:
    local_10 = (undefined1 *)0x25;
    puVar3 = local_10;
    puVar6 = local_10;
    break;
  case (undefined1 *)0x6a:
    puVar6 = (undefined1 *)0x27;
  default:
    puVar3 = puVar6;
    if (puVar6 == (undefined1 *)0x26) {
      puVar3 = (undefined1 *)0x23;
    }
  }
  local_10 = (undefined1 *)0x0;
  FUN_0040fdc3(puVar3,iVar7,iVar7 + 12000,*(undefined4 *)(unaff_EBP + 0x14));
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  do {
    if (iVar4 == 0xb) {
      if (((puVar6 != (undefined1 *)0x3f) && (puVar6 != (undefined1 *)0x47)) &&
         (puVar6 != (undefined1 *)0x57)) {
LAB_0040fcaf:
        iVar2 = *(int *)(*(int *)(unaff_EBP + 0x10) + iVar4 * 4);
        if (iVar2 != 0) {
          puVar3 = puVar6;
          if (puVar6 == (undefined1 *)0x26) {
            puVar3 = (undefined1 *)0x23;
          }
          local_10 = (undefined1 *)
                     (~-(uint)(iVar4 != 0xb) & ~-(uint)(iVar5 / 100000 != 0x11) & uVar1);
          FUN_0040fdc3(puVar3,iVar7,iVar2,*(undefined4 *)(unaff_EBP + 0x14));
          iVar4 = *(int *)(unaff_EBP + 0x18);
        }
      }
    }
    else if (((iVar4 != 0x12) && (iVar4 != 0x13)) && (iVar4 != 0x14)) goto LAB_0040fcaf;
    iVar4 = iVar4 + 1;
    *(int *)(unaff_EBP + 0x18) = iVar4;
    if (0x30 < iVar4) {
      if (*(int *)(*(int *)(unaff_EBP + 0x10) + 4) == 0) {
        if ((DAT_00973a70 & 1) == 0) {
          DAT_00973a70 = DAT_00973a70 | 1;
          local_10 = (undefined1 *)0x47f;
          FUN_00679e4e(&DAT_00973a6c);
          local_10 = &LAB_00410944;
          FUN_008796d0();
        }
        if (**(int **)(unaff_EBP + 0x14) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(**(int **)(unaff_EBP + 0x14) + -4);
        }
        iVar7 = 0;
        if (0 < iVar5) {
          do {
            puVar6 = DAT_00973a6c;
            local_10 = DAT_00973a6c;
            bVar8 = DAT_00973a6c != (undefined1 *)0x0;
            *(undefined1 ***)(unaff_EBP + 0x14) = &local_10;
            if (bVar8) {
              InterlockedIncrement((LONG *)(puVar6 + 8));
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00417360(iVar7);
            FUN_0040fda6();
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return 1;
    }
  } while( true );
}


