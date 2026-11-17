/* FUN_004622bb - 0x004622bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004622bb(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uStack00000004;
  undefined4 uVar9;
  int local_c;
  
  iVar3 = FUN_0042459a();
  iVar4 = FUN_0042459a();
  iVar5 = FUN_0042459a();
  bVar2 = false;
  piVar1 = (int *)(DAT_00978368 + 0x327c);
  uStack00000004 = 0;
  local_c = 0;
  do {
    iVar8 = *piVar1;
    if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uStack00000004)) {
      return;
    }
    piVar6 = (int *)(iVar8 + local_c);
    if ((piVar6 != (int *)0x0) && (iVar3 == *piVar6)) {
      iVar8 = 0;
      piVar7 = piVar6;
      do {
        piVar7 = piVar7 + 1;
        if (*piVar7 == 0) break;
        if (*piVar7 == iVar4) {
          bVar2 = false;
          if ((piVar6[0xd] < 1) && (0 < iVar5)) {
            bVar2 = true;
          }
          piVar6[0xd] = iVar5;
          if (bVar2) {
            uVar9 = 0xffffffff;
LAB_0046235e:
            FUN_0045d578(iVar4,uVar9);
            FUN_00492a12();
          }
          else if (iVar5 == 0) {
            uVar9 = 0x96;
            goto LAB_0046235e;
          }
          bVar2 = true;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 10);
      if (bVar2) {
        return;
      }
    }
    uStack00000004 = uStack00000004 + 1;
    local_c = local_c + 0x68;
  } while( true );
}


