/* FUN_007a5db6 - 0x007a5db6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007a5db6(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  FUN_007d1e08();
  if (*(int *)(param_1 + 0x1eb0) != 0) {
    while (*(int *)(param_1 + 0x1ebc) != 0) {
      if (0 < *(int *)(*(int *)(param_1 + 0x1ec0) + 4)) {
        piVar1 = *(int **)(param_1 + 0x1ec0);
        piVar1[1] = piVar1[1] + -0x1e;
        if (piVar1[2] == 0) {
          return;
        }
        piVar3 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x10))();
        iVar2 = *piVar3;
        iVar6 = piVar3[1];
        local_8 = DAT_00978138;
        iVar5 = *piVar1;
        if (iVar5 == 2) {
          iVar4 = __ftol();
          piVar1[2] = iVar4;
        }
        iVar4 = piVar1[2];
        iVar2 = iVar2 + iVar4;
        if ((iVar4 < 0x1e) && (iVar5 != 2)) {
          iVar4 = 0x1e;
        }
        iVar5 = FUN_0087a90a(iVar4);
        iVar5 = FUN_00861327(iVar2,iVar6,&local_c,iVar5 + iVar6);
        iVar4 = FUN_0087a90a(iVar4);
        iVar4 = FUN_0086123f(iVar2,iVar6,&local_10,iVar6 - iVar4);
        if (iVar5 == 0) {
          iVar5 = local_10;
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x1eb0) = 0;
            return;
          }
        }
        else {
          iVar5 = local_c;
          if ((iVar4 != 0) && (iVar5 = local_10, local_c - iVar6 <= iVar6 - local_10)) {
            iVar5 = local_c;
          }
        }
        uVar7 = -(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU;
        iVar4 = uVar7 + 0xc;
        iVar6 = (**(code **)(*(int *)(uVar7 + 0xc) + 0x40))(iVar4,iVar2,iVar5 + -1);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,iVar4,&DAT_00963d08);
        }
        *(int *)(param_1 + 0xd58) = iVar2;
        *(int *)(param_1 + 0xd5c) = iVar5 + -1;
        return;
      }
      FUN_007b4700(*(undefined4 *)(param_1 + 0x1ec0));
    }
  }
  return;
}


