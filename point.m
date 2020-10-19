clear all;
% ��׺_Dir��λ��������׺_Vecһ����������׺_Pnt�����꣬_Norm�߶γ���

%ֱ��1��������
L1_Dir = [1,1,0];
%��λ��
L1_Dir = L1_Dir./norm(L1_Dir);
%ֱ��L1��һ��
P1_Pnt = [0,0,0];
% ֱ��L2�����������ı�L2_Dir����
L2_Dir = [-1,0.1,0];
%��λ��
L2_Dir = L2_Dir./norm(L2_Dir);
% ֱ��L2��һ��
P2_Pnt = [1,0,0];
% P1P2����
P1P2_Vec = P2_Pnt-P1_Pnt;
%�����P2��ֱ��L1�ľ���
P2P3_Norm = norm(cross(P1P2_Vec,L1_Dir));
%ͶӰ��P3����
P3_Pnt = P1_Pnt + (P1P2_Vec*L1_Dir').*L1_Dir;

CosTheta= abs(L1_Dir*L2_Dir');
K_Pnt = [];%����
if CosTheta < 1e-7;
    % ��ֱ�ߴ�ֱ
    % ��������
    K_Pnt = P3_Pnt;
end

if CosTheta > 1e-7;
    TanTheta = (1-CosTheta^2)^0.5/CosTheta;
    KP3_Norm = P2P3_Norm/TanTheta;
    
    K1_Pnt = P3_Pnt + KP3_Norm.*L1_Dir;
    K2_Pnt = P3_Pnt - KP3_Norm.*L1_Dir;
    
    P2K1_Vec = K1_Pnt - P2_Pnt;
    P2K2_Vec = K2_Pnt - P2_Pnt;
    
    D1 = norm(cross(P2K1_Vec,L2_Dir)); %��K1��ֱ��L2�ľ���
    D2 = norm(cross(P2K2_Vec,L2_Dir)); %��K2��ֱ��L2�ľ���
    % ��ֱ��L2����С�ĵ�����Ϊ����
    if D1 < D2;
        K_Pnt = K1_Pnt;
    else
        K_Pnt = K2_Pnt;
    end
    
end

% L1��һ��
P1End_Pnt = P1_Pnt + 2.*L1_Dir;
plot([P1_Pnt(1),P1End_Pnt(1)],[P1_Pnt(2),P1End_Pnt(2)], 'r','LineWidth',2);
hold on;
% L2��һ��
P2End_Pnt = P2_Pnt + 2.*L2_Dir;
plot([P2_Pnt(1),P2End_Pnt(1)],[P2_Pnt(2),P2End_Pnt(2)], 'g-','LineWidth',2);
hold on;
plot(P1_Pnt(1),P1_Pnt(2),'O','MarkerSize',5,'MarkerFaceColor','red');
hold on;
plot(P2_Pnt(1),P2_Pnt(2),'O','MarkerSize',5,'MarkerFaceColor','green');
hold on;
plot(K_Pnt(1),K_Pnt(2),'O','MarkerSize',10,'MarkerFaceColor','magenta');
legend('ֱ��L1','ֱ��L2','P1','P2','����K');
axis([-0.5,2.5,-0.5,2]);
grid on;