/* FUN_00473da9 - 0x00473da9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00473da9(void)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  SOCKET s;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int extraout_ECX;
  ushort *puVar9;
  int unaff_EBP;
  ushort *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffff554;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x14) != 0) {
    if (*(int *)(unaff_EBP + 8) != 0) {
      iVar6 = FUN_00474dfe(0x5b4,unaff_EBP + 0xb);
      *(int *)(unaff_EBP + -0x24) = iVar6;
      if (iVar6 != 0) {
        InterlockedIncrement((LONG *)(iVar6 + 4));
      }
      puVar10 = *(ushort **)(*(int *)(unaff_EBP + -0x24) + 0x10);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0x28;
      puVar9 = puVar10;
LAB_00473eb0:
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        iVar6 = 2 - (int)puVar9;
      }
      else {
        iVar6 = (uint)*(ushort *)(unaff_EBP + -0x14) - (int)puVar9;
      }
      iVar6 = (*DAT_0097b76c)(*(undefined4 *)(extraout_ECX + 8),puVar9,(int)puVar10 + iVar6,0);
      if (iVar6 == -1) {
        iVar6 = (*DAT_0097b738)();
        if (iVar6 == 0x2733) {
          (*DAT_0097b3ec)(500);
          piVar1 = (int *)(unaff_EBP + -0x18);
          *piVar1 = *piVar1 + -1;
          if (-1 < *piVar1) goto LAB_00473eb0;
        }
        iVar6 = 0;
      }
      puVar9 = (ushort *)((int)puVar9 + iVar6);
      if (iVar6 == 0) goto LAB_00473f42;
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        if ((int)puVar9 - (int)puVar10 == 2) {
          uVar3 = *puVar10;
          uVar7 = *(uint *)(*(int *)(unaff_EBP + -0x24) + 0xc);
          *(uint *)(unaff_EBP + -0x14) = (uint)uVar3;
          if (uVar7 < uVar3) {
            iVar6 = 0;
            goto LAB_00473f3e;
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          puVar9 = puVar10;
        }
        goto LAB_00473eb0;
      }
      if ((int)puVar9 - (int)puVar10 != (uint)*(ushort *)(unaff_EBP + -0x14)) goto LAB_00473eb0;
LAB_00473f3e:
      if (iVar6 == 0) {
LAB_00473f42:
        FUN_00473da9(0);
        uVar8 = FUN_004742cc();
        return uVar8;
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(ushort **)(unaff_EBP + -0x18) = puVar9;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if ((uint)((int)puVar9 - (int)puVar10) < 2) {
        *(undefined4 *)(unaff_EBP + -0x58) = 0x26;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x58,&DAT_008f9b80);
      }
      *(ushort *)(unaff_EBP + -0x14) = *puVar10;
      puVar10 = puVar10 + 1;
      iVar6 = FUN_0045ce2b(unaff_EBP + -0x20,puVar10,*(int *)(unaff_EBP + -0x18) - (int)puVar10);
      puVar11 = (undefined4 *)((int)puVar10 + iVar6);
      uVar7 = FUN_0087b6ab(*(undefined4 *)(unaff_EBP + -0x20));
      pcVar5 = *(char **)(unaff_EBP + -0x18);
      *(uint *)(DAT_00978368 + 0x3338) = uVar7 & 1;
      if ((uint)((int)pcVar5 - (int)puVar11) < 4) {
        *(undefined4 *)(unaff_EBP + -0x44) = 0x26;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x44,&DAT_008f9b80);
      }
      if ((uint)((int)pcVar5 - (int)(puVar11 + 1)) < 4) {
        *(undefined4 *)(unaff_EBP + -100) = 0x26;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -100,&DAT_008f9b80);
      }
      uVar8 = puVar11[1];
      if (pcVar5 == (char *)(puVar11 + 2)) {
        *(undefined4 *)(unaff_EBP + -0x54) = 0x26;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x54,&DAT_008f9b80);
      }
      cVar2 = *(char *)(puVar11 + 2);
      if ((char *)((int)puVar11 + 9) < pcVar5) {
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(0,0);
      }
      *(undefined4 *)(extraout_ECX + 0x84) = *puVar11;
      *(undefined4 *)(extraout_ECX + 0x88) = uVar8;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (cVar2 != '\b') {
        *(undefined4 *)(unaff_EBP + 8) = 0x22000007;
        *(undefined4 *)(unaff_EBP + -0x60) = 0x22000007;
        *(undefined1 *)(unaff_EBP + -4) = 6;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x60,&DAT_008f7260);
      }
      if (0x3e < *(ushort *)(unaff_EBP + -0x14)) {
        puVar11 = (undefined4 *)FUN_004dda7e(*(undefined2 *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puVar12 = (undefined4 *)(unaff_EBP + -0x5a4);
        for (iVar6 = 0x142; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x5a4,&DAT_00903688);
      }
      if (*(ushort *)(unaff_EBP + -0x14) < 0x3e) {
        *(undefined4 *)(unaff_EBP + 8) = 0x22000007;
        *(undefined4 *)(unaff_EBP + -0x5c) = 0x22000007;
        *(undefined1 *)(unaff_EBP + -4) = 8;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x5c,&DAT_008f7260);
      }
      FUN_00475946();
      FUN_00475e3b();
      s = *(SOCKET *)(extraout_ECX + 8);
      *(undefined4 *)(extraout_ECX + 0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0x10;
      iVar6 = getpeername(s,(sockaddr *)(extraout_ECX + 0x28),(int *)(unaff_EBP + -0x18));
      if (iVar6 == -1) {
        iVar6 = WSAGetLastError();
        *(int *)(unaff_EBP + -0x48) = iVar6;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x48,&DAT_008f9b80);
      }
      if (*(int *)(extraout_ECX + 0x24) != 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uVar8 = FUN_008282ba();
        *(undefined4 *)(unaff_EBP + -0x8c) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
        *(undefined4 *)(unaff_EBP + -0x88) = 0;
        *(undefined4 *)(unaff_EBP + -0x84) = 0;
        *(undefined4 *)(unaff_EBP + -0x6c) = 0;
        *(undefined4 *)(unaff_EBP + -0x68) = 0;
        *(undefined ***)(unaff_EBP + -0x9c) = &PTR_FUN_008e96dc;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00474530(uVar8,3,0x80,1,0x80000000,0,0);
        uVar7 = FUN_004746b9();
        *(uint *)(unaff_EBP + -0x18) = uVar7;
        if ((uVar7 != 0) && (uVar7 < 0x2000)) {
          uVar8 = FUN_00475c07(uVar7,unaff_EBP + -0x29);
          FUN_004747e4(uVar8,*(undefined4 *)(unaff_EBP + -0x18));
        }
        FUN_004744d2();
        (*DAT_0097b468)(*(undefined4 *)(unaff_EBP + -0x14));
        *(undefined ***)(unaff_EBP + -0x9c) = &PTR_FUN_008e96dc;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004744d2();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00475967();
        uVar8 = FUN_004741cf();
        return uVar8;
      }
      FUN_0060142b(0x14,0,0);
      uVar8 = *(undefined4 *)(DAT_00978368 + 0x2088);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00457d37(uVar8);
      FUN_00457cda(0);
      FUN_00457cda(0);
      FUN_004751b2(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0045ebca();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00475b89(0);
      }
      uVar8 = 1;
      goto LAB_004742e2;
    }
    if (*(int *)(extraout_ECX + 0x20) == 0) {
      FUN_00475195();
      if (*(int *)(extraout_ECX + 0x24) == 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0x21000001;
        *(undefined4 *)(unaff_EBP + -0x50) = 0x21000001;
        *(undefined4 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x50,&DAT_00903698);
      }
      *(undefined4 *)(unaff_EBP + 8) = 0x22000001;
      *(undefined4 *)(unaff_EBP + -0x4c) = 0x22000001;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x4c,&DAT_008f7260);
    }
    iVar6 = *(int *)(extraout_ECX + 0x20);
    iVar4 = *(int *)((-(uint)(iVar6 != 0) & iVar6 - 0x10U) + 4);
    *(uint *)(extraout_ECX + 0x20) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    FUN_00473ce6(iVar6);
  }
  uVar8 = 0;
LAB_004742e2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


