/* ptr_00746840 - 0x00746840 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00746840(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  int iStack_8;
  int iStack_4;
  
  iVar5 = 0;
  iStack_8 = param_1;
  iStack_4 = param_1;
  if (*(int *)(param_1 + 0x70) != 0) {
    DAT_0097be20 = DAT_0097be20 + 1;
    if (DAT_0097be20 % 0x20 != 0) goto LAB_0074689c;
  }
  FUN_00817e25(&iStack_8,0);
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
  iVar1 = iStack_4 - iVar1;
  iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(iVar1);
  FUN_007401e1(iStack_8 - iVar2,iVar1);
LAB_0074689c:
  if (*(int *)(param_1 + 0xc1c) != 0) {
    uVar3 = (*DAT_0097b704)();
    if (*(uint *)(param_1 + 0xc1c) < uVar3) {
      FUN_0051b4cb();
      *(uint *)(param_1 + 0xc1c) = 0;
    }
  }
  if (*(int *)(DAT_009784c0 + 0x9b4) != 9) {
    if ((*(int *)(DAT_009784c0 + 0x9b4) != 7) && (*(int *)(param_1 + 0xc28) != 0)) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0xc28),
                 (IBinding *)0x0);
    }
    if (*(int *)(param_1 + 0xb34) != 0) {
      *(undefined4 *)(param_1 + 0xb34) = 0;
    }
  }
  piVar6 = (int *)(param_1 + 0xc54);
  do {
    iVar1 = *piVar6;
    DVar4 = timeGetTime();
    if ((iVar1 + 90000U < DVar4) && (iVar1 != -1)) {
      FUN_00747bcb(iVar5,0);
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 4);
  DVar4 = timeGetTime();
  if (1000 < DVar4 - *(int *)(param_1 + 0xd4c)) {
    FUN_00748389();
  }
  FUN_008162ff();
  return;
}


