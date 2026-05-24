public class TelaAula19 extends javax.swing.JFrame {
    private ControleRemoto c;
    public TelaAula19() {
        initComponents();
        c = new ControleRemoto();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        pwr = new javax.swing.JButton();
        menu = new javax.swing.JButton();
        inc = new javax.swing.JButton();
        dec = new javax.swing.JButton();
        mute = new javax.swing.JButton();
        pause = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        txt = new javax.swing.JTextArea();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Controle Remoto - Nicolas de Antoni Mendes");

        pwr.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        pwr.setForeground(new java.awt.Color(255, 0, 0));
        pwr.setText("( | )");
        pwr.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                pwrActionPerformed(evt);
            }
        });

        menu.setFont(new java.awt.Font("Tahoma", 0, 16)); // NOI18N
        menu.setText("MENU");
        menu.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menuActionPerformed(evt);
            }
        });

        inc.setFont(new java.awt.Font("Tahoma", 0, 20)); // NOI18N
        inc.setText("+");
        inc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                incActionPerformed(evt);
            }
        });

        dec.setFont(new java.awt.Font("Tahoma", 0, 20)); // NOI18N
        dec.setText("-");
        dec.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                decActionPerformed(evt);
            }
        });

        mute.setFont(new java.awt.Font("Tahoma", 0, 16)); // NOI18N
        mute.setText("Mutar/Desmutar");
        mute.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                muteActionPerformed(evt);
            }
        });

        pause.setFont(new java.awt.Font("Tahoma", 0, 16)); // NOI18N
        pause.setText("||/|>");
        pause.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                pauseActionPerformed(evt);
            }
        });

        txt.setColumns(20);
        txt.setRows(5);
        jScrollPane1.setViewportView(txt);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(pwr)
                .addGap(82, 82, 82)
                .addComponent(menu)
                .addContainerGap(435, Short.MAX_VALUE))
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(88, 88, 88)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(dec, javax.swing.GroupLayout.PREFERRED_SIZE, 69, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(inc, javax.swing.GroupLayout.PREFERRED_SIZE, 69, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(50, 50, 50)
                        .addComponent(mute))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(90, 90, 90)
                        .addComponent(pause)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 315, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(pwr)
                            .addComponent(menu))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 53, Short.MAX_VALUE)
                        .addComponent(inc)
                        .addGap(18, 18, 18)
                        .addComponent(dec)
                        .addGap(42, 42, 42)
                        .addComponent(mute)
                        .addGap(39, 39, 39)
                        .addComponent(pause)
                        .addGap(58, 58, 58))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jScrollPane1)
                        .addContainerGap())))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void incActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_incActionPerformed
        c.aumentarVolume();
    }//GEN-LAST:event_incActionPerformed

    private void muteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_muteActionPerformed
        // TODO add your handling code here:
        if (c.isMutado() == false){
            c.mutar();
        } else {
            c.desmutar();
        }
    }//GEN-LAST:event_muteActionPerformed

    private void pwrActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_pwrActionPerformed
        if (c.isLigado() == false){
            c.ligar();
            txt.setText("Ligando...");
        } else {
            c.desligar();
            txt.setText("Desligando...");
        }
    }//GEN-LAST:event_pwrActionPerformed

    private void menuActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menuActionPerformed
        if (c.isMenu() == false){
            c.abrirMenu();
            txt.setText("======== MENU ========\n" +
                        "Ligado: " + c.isLigado() + "\n" +
                        "Passando: " + c.isPassando() + "\n" +
                        "Volume: " + c.getVolume()
                    );
        } else {
            c.fecharMenu();
            txt.setText("Fechando Menu...");
    }
    }//GEN-LAST:event_menuActionPerformed

    private void decActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_decActionPerformed
        c.diminuirVolume();
    }//GEN-LAST:event_decActionPerformed

    private void pauseActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_pauseActionPerformed
        // TODO add your handling code here:
        if (c.isPassando()){
            c.pause();
        } else {
            c.play();
        }
    }//GEN-LAST:event_pauseActionPerformed

    public static void main(String args[]) {

        
        
        
        
        
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new TelaAula19().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton dec;
    private javax.swing.JButton inc;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JButton menu;
    private javax.swing.JButton mute;
    private javax.swing.JButton pause;
    private javax.swing.JButton pwr;
    private javax.swing.JTextArea txt;
    // End of variables declaration//GEN-END:variables
}
